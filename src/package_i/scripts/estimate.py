#!/usr/bin/env python
import rospy
from rosserial_arduino.msg import Adc
import numpy as np
import pandas as pd
import csv

parameters = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/parameters.csv', header=None)
array_parameters = np.array
array_parameters = parameters.values

f = open('/home/yuta/ros/workspaces/myWorkspace/EstimatedResult.csv','w')
writer = csv.writer(f)

print('---')

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
	print('---')
	print('Estiamted pressure: ', array)
	writer.writerow([array])

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
	listener()
	print('=====')


