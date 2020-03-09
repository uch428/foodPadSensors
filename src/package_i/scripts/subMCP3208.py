#!/usr/bin/env python
import rospy
from rosserial_arduino.msg import Adc
import openpyxl as px
import numpy as np
import pandas as pd
import csv

f = open('/home/yuta/ros/workspaces/myWorkspace/voltageData2.csv', 'w')
writer = csv.writer(f)


r = 1
initialColumn = 1
c = initialColumn
	

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
	
	csvWrite(data)


def csvWrite(data):
	global r
	global c
		
	global writer
	writer.writerow([data.adc0, data.adc1, data.adc2, data.adc3, data.adc4, data.adc5, data.adc6, data.adc7])

	r += 1
	c = initialColumn
	
def listener():
	rospy.init_node('listener', anonymous = True)
	
	print('========================')
	rospy.Subscriber('adc', Adc, callback)
	rospy.spin()
	print('=====')

if __name__ == '__main__':
	

	#label = ['adc0', 'adc1', 'adc2', 'adc3', 'adc4', 'adc5', 'adc6', 'adc7'] 
	#i = 1
	#for w in label:
	#	writer.writerow(label)	
	#	i += 1
	
	listener()
	print('number of received data set: %d', r-1)
	print('end listener')
	#	ws.cell(row = r, column = i+1, value = 'end of data')

	#wb.save('/home/yuta/ros/workspaces/myWorkspace/data1.csv')

	#csvRead(csvpath)
		




# answers.ros.org/question/265150/need-help-in-subscribing-from-one-topic-and-publishing-to-another/
