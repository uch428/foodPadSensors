#include "ros/ros.h"
#include "std_msgs/String.h"
#include "rosserial_arduino/Adc.h"

void adcCallback(const std_msgs::ConstPtr& adc_msg)
{
	ROS_INFO("received: [%d]", adc_msg[1]);
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "listener");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("adc", 1000, adcCallback);
	ros::spin();
	return 0;
}
