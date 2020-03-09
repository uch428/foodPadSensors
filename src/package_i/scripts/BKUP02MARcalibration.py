#!/usr/bin/python
import rospy
from rosserial_arduino.msg import Adc
import openpyxl as px
import numpy as np
import pandas as pd
import csv

import os, time
import usb.core
import usb.util
import pygtk
pygtk.require('2.0')
import gtk
from sys import exit
import math

import threading

# DYMO M10
VENDOR_ID = 0x0922
PRODUCT_ID = 0x8006
# find the USB device
dev = usb.core.find(idVendor=VENDOR_ID, idProduct=PRODUCT_ID)


# For receiving the sensors data
f = open('/home/yuta/ros/workspaces/myWorkspace/calibration.csv', 'w')
writer = csv.writer(f)


r = 1
rowCtr = 1
rowCurrent = 1

rowVoltage = 1
rowWeight = 1

initialColumn = 1
c = initialColumn

weight_global = None

rowData = [
	r,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	None,
]


def main():
	thread_scale = threading.Thread(target=main_scale)
	thread_sensors = threading.Thread(target=main_sensors)
	
	thread_scale.start()
	thread_sensors.start()


def main_scale():
   	try:
		if dev is None:
		    print "device not found"
		    exit()
		else:
		    interface = 0
		    if dev.is_kernel_driver_active(interface) is True:
		        print "but we need to detach kernel driver"
		        dev.detach_kernel_driver(interface)
		        # use the first/default configuration
		        dev.set_configuration()
		        print "claiming device"
		        usb.util.claim_interface(dev, interface)

	

	except KeyboardInterrupt as e: 
		print "\nquitting"
		exit();


def main_sensors():
	listen_sensors()

#########################


def callback(data):
	rospy.loginfo('adc0: %s', data.adc0)
	rospy.loginfo('adc1: %s', data.adc1)
	rospy.loginfo('adc2: %s', data.adc2)
	rospy.loginfo('adc3: %s', data.adc3)
	rospy.loginfo('adc4: %s', data.adc4)
	rospy.loginfo('adc5: %s', data.adc5)
	rospy.loginfo('adc6: %s', data.adc6)
	rospy.loginfo('adc7: %s', data.adc7)
	#print(data.adc0)
	print('---')	
	csvWriteVoltage(data)

def csvWriteVoltage(data):
	global rowData
	global writer
	#writer.writerow([data.adc0, data.adc1, data.adc2, data.adc3, data.adc4, data.adc5, data.adc6, data.adc7])

	
#	rowData = [
#		r,
#		data.adc0,
#		data.adc1,
#		data.adc2,
#		data.adc3,
#		data.adc4,
#		data.adc5,
#		data.adc6,
#		data.adc7,
#		0.0,
#	]
	rowData[1] = data.adc0
	rowData[2] = data.adc1
	rowData[3] = data.adc2
	rowData[4] = data.adc3
	rowData[5] = data.adc4
	rowData[6] = data.adc5
	rowData[7] = data.adc6
	rowData[8] = data.adc7

	
	#weight = checkWeight('check')
	#if weight != None:
	#	rowData[9] = weight
	#	writer.writerow(rowData)

	#	rawData[0] += 1
	#	weight = None
		
	
	if rowData[9] != None:
		writer.writerow(rowData)
		rowData[0] += 1
		rowData[9] = None
	else:
		print'waiting for scale data'
		


def checkWeight():
	global weight_global
	return weight_global



def listen_sensors():
	rospy.init_node('listener', anonymous = True)
	print('========================')
	rospy.Subscriber('adc', Adc, callback)

	rospy.spin()
	print('=====')


#########################


def grab():
    	try:
		# first endpoint
		endpoint = dev[0][(0,0)][0]
		# read a data packet
		attempts = 10
		data = None
		while data is None and attempts > 0:
		    try:
		        data = dev.read(endpoint.bEndpointAddress,
		                           endpoint.wMaxPacketSize)
		    except usb.core.USBError as e:
		        data = None
			print e.args
		        if e.args == ('Operation timed out',):
		            attempts -= 1
		            print "timed out... trying again"
		            continue
		return data
	except usb.core.USBError as e:
		print "USBError: " + str(e.args)
	except IndexError as e:
		print "indexError: " + str(e.args)


def listen_scale():
	ctr = 1
	global rowData

	print "listening for weight..."

	while True:
		try:
			#time.sleep(.5)
			data = grab()
			if data != None:
			    raw_weight = data[4] + data[5] * 256
			else:
				print'-----data[9] = None'
				continue


			print "ROWDATA[9] = ", raw_weight
			rowData[9] = raw_weight

			if rowData[0] < ctr:
				print'-----scale loop is faster---'
			ctr += 1
	
		except KeyboardInterrupt:
			break


if __name__ == '__main__':
	try:
		main()
	except:
		pass


