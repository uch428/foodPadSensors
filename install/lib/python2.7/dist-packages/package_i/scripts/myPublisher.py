#!/usr/bin/env python
import rospy
from std_msgs.msg import String
from package_i.msg import *

def myPublishFunction():
	my_firstPublisher = rospy.Publisher('firstChatter', String, queue_size = 1000)
	my_secondPublisher = rospy.Publisher('secondChatter', my_message_i, queue_size = 1000)
	rospy.init_node('my_publisherNode', anonymous = True)
	rate = rospy.Rate(10)

	while not rospy.is_shutdown():
		my_firstMessage = "hello world"
		my_secondMessage = my_message_i()
		my_secondMessage.wrench.wrench.force.x = rospy.get_time()
		my_secondMessage.wrench.wrench.force.y = rospy.get_time()
		my_secondMessage.wrench.wrench.force.z = rospy.get_time()
		
		my_secondMessage.wrench.wrench.force.x = rospy.get_time()
		my_secondMessage.wrench.wrench.force.y = rospy.get_time()
		my_secondMessage.wrench.wrench.force.z = rospy.get_time()
		my_secondMessage.score = rospy.get_time()

		my_firstPublisher.publish(my_firstMessage)
		my_secondPublisher.publish(my_secondMessage)
		rate.sleep()

if __name__ = '__main__':
	try:
		myPublishFunction()
	except rospy.ROSInterruptException:
		pass	
