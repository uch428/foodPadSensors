#!/usr/bin/env python

import getch
import rospy
from std_msgs.msg import String #string message
from std_msgs.msg import Int8

###########################
# github.com/yuvaramsingh94/Ros-Keyboard-Input/blob/master/keypress.py
############################


def keys():
	pub = rospy.Publisher('key', Int8, queue_size=10) # publisher name: 'key'
	rospy.init_node('keypress', anonymous=True)
	rate = rospy.Rate(10) #try remove this line and see what happens
	
	while not rospy.is_shutdown():
		k=ord(getch.getch()) 
		#if ((k>=65)&(k<=68)|(k==115)|(k==113)|(k==97)):
		rospy.loginfo(str(k))
		pub.publish(k)

		if (k==113):
			print'break'
			break
		#rospy.loginfo(str(k))
	
		#rate.sleep()
#s=115, e=101, g=103, b=98

if __name__ == '__main__':

	print'type key Q to break'
	try:
		keys()
	except	rospy.ROSInterruptException:
		pass

	except:
		pass

#1
# 1583515272.490555  (time stamp for key input)
	#time: 17:21:12.490z
# 1583515272.339432954 (time stamp for sensors)
	#time: 17:21:12.339
# latency is 151ms when arduino program contains delay(10)

#2
# 1583518528.031830 (key)
	#time: 18:15:28.031
# 1583518528.276931047 (sensors)
	#time: 18:15:28.276
 # residual = 245ms

#3 40.910- 40.781 = 229ms
#4 19.487 - 19.378 = 109ms
#----measurements above could be wrong in some way
#5 42.897 - 42.865 = 0.32ms
#6 57.527 - 57.519 = 0.008ms
#7 10.090 - 10.004 = 0.086ms
#8 10.309 - 10.295 = 0.014ms
#9 13.840 - 13.825 = 0.015ms
#10 29.331 - 29.318 = 0.013ms

# ave(#5:#10) = 0.076ms (min 0.008, max 0.86ms)
# where refresh rate for adc is 0.031sec/frame


#how to conver into ms on terminal
#$ date "+%Y-%m-%dT%H:%M:%S.%3NZ" --utc -d @1583515272.339432954

