#!/usr/bin/env python
# license removed for brevity

import rospy
from std_msgs.msg import String 
def talker():	
	pub = rospy.Publisher('chatter', String, queue_size = 10)
	rospy.init_node('talker', anonymous = True)
	r = rospy.Rate(10) # 10Hz
	
	while not rospy.is_shutdown(): # ctrl+c -> rospy.is_shutdown() = 1
	# what this loop wants to do: Send created 'str' to the 'chatter' topic, which we call publishing.
		str = "hello world %s"%rospy.get_time()
		# loginfo does display message on the terminal, write on log file, and output to rosout(used for debugging)
		rospy.loginfo(str)
		pub.publish(str)
		r.sleep()

if __name__ == '__main__':
	try:
		talker()
	except rospy.ROSInterruptException:
		pass
		
