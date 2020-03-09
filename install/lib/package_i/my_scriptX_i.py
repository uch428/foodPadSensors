#!/usr/bin/env python
#
import rospy
#
def myFunction():
	rospy.init_node('myNodeNamePython', anonymous = True)
	rate = rospy.Rate(10)
	while not rospy.is_shutdown():
		# some computation done here
		rate.sleep()

if __name__ == '__main__':
	try:
		myFunction()
	except rospy.ROSInterruptException:
		pass
