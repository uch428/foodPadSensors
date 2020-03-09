#!/usr/bin/env python
import rospy
import numpy as np
import pandas as pd
import csv




#parepare np array

numArr = np.array
volArr = np.array
weightArr = np.array

# insert data from csv
Data = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/calibration.csv', header = None)


def calculate():


	dataArr = Data.values
	print(dataArr)

	# split them into index, data from sensors, data from scale
	numArr, volArr = np.hsplit(dataArr, [1])
	volArr, weightArr = np.hsplit(volArr, [8])
	print(numArr)
	print'================'
	print(volArr)
	print'================'
	print(weightArr)

	print('=======')


	# calculate Pseudo-inverse Matrix of V
		#pinv_V = np.linalg.pinv(array_V)	
	pinv_volArr = np.linalg.pinv(volArr)	
	print(pinv_volArr)

	with open("pinv.csv", "w") as f_pinv:
			#csv_w_p = csv.writer(f_pinv)
			#csv_w_p.writerows(pinv_volArr)
		writerPinv = csv.writer(f_pinv)
		writerPinv.writerows(pinv_volArr)		
		

	# multiple
	#result = pinv_V * array_F
	result = np.dot(pinv_volArr, weightArr)
	print(result)

	with open("/home/yuta/ros/workspaces/myWorkspace/parameters.csv", 'w') as f_result:
			#csv_w = csv.writer(f_result)
			#csv_w.writerows(a)
		writerResult = csv.writer(f_result)
		writerResult.writerows(result)
		

if __name__ == '__main__':

	calculate()
	print('done')




# answers.ros.org/question/265150/need-help-in-subscribing-from-one-topic-and-publishing-to-another/
