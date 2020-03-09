#!/usr/bin/python
import pandas as pd

import matplotlib.pyplot as plt
#%matplotlib inline

data = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/plotResult.csv', header=None)
trainData = pd.read_csv('/home/yuta/ros/workspaces/myWorkspace/calibration.csv', header=None)

data_col = data.columns
t_col = trainData.columns

print(data)



def plot_calibrationData():
	plt.figure('calibration')
	plt.plot(trainData[t_col[0]], trainData[t_col[9]])
	plt.xlabel('data index')
	plt.ylabel('calibrated weight [g]')
	plt.savefig('fig_calibration.png')
	plt.show()

def plot_estimationResult():
	plt.figure('Estimated result')
	plt.scatter(data[data_col[0]], data[data_col[10]])
	plt.plot(data[data_col[0]], data[data_col[9]])
	plt.xlabel("data index")
	plt.ylabel("Weight[g]")
	plt.savefig('fig_result.png')
	plt.show()

def plot_estimationError():
	global data
	data = data.sort_values(data.columns[10])

	plt.figure('Estimation result error')
	plt.plot(data[data_col[9]], data[data_col[9]]) # ideal
	plt.scatter(data[data_col[9]], data[data_col[10]]) # scatter(scaleWeight, estimatedWeight)
	# index for "data_col[]" and "data.columns[]" is shifted for 1 e.g. data_col[0] = data.columns[1])
	plt.xlabel("Weight from scale [g]")
	plt.ylabel("Estimated weight[g]")
	plt.savefig('fig_error.png')
	plt.show()

if __name__ == '__main__':
	
	plot_calibrationData()
	plot_estimationResult()
	plot_estimationError()
