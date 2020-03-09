#!/usr/bin/env python
import rospy
from rosserial_arduino.msg import Adc
import numpy as np
import pandas as pd
import csv


import os, time
import usb.core
import usb.util
from multiprocessing import Process, Value, Queue
from multiprocessing.managers import BaseManager
import multiprocessing


parameters = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/parameters.csv', header=None)
array_parameters = np.array
array_parameters = parameters.values

f = open('/home/yuta/ros/workspaces/myWorkspace/plottedResult.csv','w')
writer = csv.writer(f)





# DYMO M10
VENDOR_ID = 0x0922
PRODUCT_ID = 0x8006
# find the USB device
dev = usb.core.find(idVendor=VENDOR_ID, idProduct=PRODUCT_ID)

q1_scaleData = Queue(maxsize=1)
q1_scaleData.put(None)

def main_scale():
	print'-------main_scale------'
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
		listen_scale()

	except KeyboardInterrupt as e: 
		print "\nquitting"
		exit();

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
	global rowData
	global q1_scaleData
	print "listening for weight..."

	while True:
		try:
			data = grab()
			if data != None:
				raw_weight = data[4] + data[5] * 256
				if q1_scaleData.empty():
					q1_scaleData.put(raw_weight)
				else:	
					q1_scaleData.put(raw_weight)
			else:
				print'-----data[9] = None'				
				q1_scaleData.put(None)
				continue

		except KeyboardInterrupt:
			break
	




def estimate(array_vol):
	
	array_result = np.array

	print('~~~~~~')
	print(array_vol)
	#print(' * ')
	#print(array_parameters)
	#print('~~~~~~')
	array_result = np.dot(array_vol, array_parameters)

	#rospy.loginfo(array_result)	
	csvWrite(array_result)


def csvWrite(array):
	global writer
	global q1_scaleData
	
	print'.',
	#print('Estiamted pressure: ', array)

	if not q1_scaleData.empty():
		print''
		weight = q1_scaleData.get()
		print'scaleData = ', weight, '  estimatedData = ', array
		writer.writerow([q1_scaleData.get()], [array])
		f.flush()

def callback(data):
	'''
	rospy.loginfo('adc0: %s', data.adc0)
	rospy.loginfo('adc1: %s', data.adc1)
	rospy.loginfo('adc2: %s', data.adc2)
	rospy.loginfo('adc3: %s', data.adc3)
	rospy.loginfo('adc4: %s', data.adc4)
	rospy.loginfo('adc5: %s', data.adc5)
	rospy.loginfo('adc6: %s', data.adc6)
	rospy.loginfo('adc7: %s', data.adc7)
	#print(data.adc0)
	'''
	print('=======================================')
	
	array_voltage = np.array([data.adc0, data.adc1, data.adc2, data.adc3, data.adc4, data.adc5, data.adc6, data.adc7])
	
	estimate(array_voltage)

def listener():
	rospy.init_node('listener', anonymous = True)
	print('========================')
	rospy.Subscriber('adc', Adc, callback)
	rospy.spin()


if __name__ == '__main__':
	print"Each data received from sensors are represented as '.' "
	
	p_listener = Process(target=listener)
	p_scale = Process(target=main_scale)
	
	p_listener.start(); print'p_listener started'
	p_scale.start(); print'p_scale started'

	p_listener.join()
	p_scale.join()

#	listener()
	print('=====')












