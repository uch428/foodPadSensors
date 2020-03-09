#!/usr/bin/env python
import rospy
import numpy as np
import pandas as pd
import csv


Data = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/calibration.csv', header=None)


VoltageData = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/voltageData.csv', headers=None)
WeightData = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/scaleExample.csv', headers=None)


print('---')

def calculate():

	# put data from csv into  numpy matrix
	array_V = np.array
	array_V = np.loadtxt

	array_F = np.array

	array_V = VoltageData.values
	array_F = WeightData.values

	#array_F_t = array_F.T
	
	# calculate Pseudo-inverse Matrix of V
	pinv_V = np.linalg.pinv(array_V)	
	print(pinv_V)

	with open("pinv.csv", "w") as f_pinv:
		csv_w_p = csv.writer(f_pinv)
		csv_w_p.writerows(pinv_V)

	# multiple
#	a = pinv_V * array_F
	a = np.dot(pinv_V, array_F)
	print(a)

	with open("/home/yuta/ros/workspaces/myWorkspace/parameters.csv", 'w') as f_result:
		csv_w = csv.writer(f_result)
		csv_w.writerows(a)
		

if __name__ == '__main__':

	calculate()
	print('done')




# answers.ros.org/question/265150/need-help-in-subscribing-from-one-topic-and-publishing-to-another/
