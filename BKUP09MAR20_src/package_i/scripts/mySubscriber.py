#!/usr/bin/env python
import rospy
from std_msgs.msg import String
from package_i.msg import *

def my_firstCallback(data):
	rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

def my_secondCallback(data):
	rospy.loginfo(rospy.get_caller_id() + "I feel the force %d", data.wrench.wrench.force.x)

def mySubscribeFunction():
	rospy.init_node('my_subscriberNode', anonymous = True)
	rospy.Subscriber("firstChatter", String, my_firstCallback)
	rospy.Subscriber("secondChatter", my_message_i, my_secondCallback)
	rospy.spin()

if __name__ == '__main__':
	try:
		mySubscribeFunction()
	except rospy.ROSInterruptException:
		pass
