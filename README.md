# foodPadSensors

Flow and explanation for training and estimating data using ROS

## Setting up ROS node to receive data from sensors
1. start ROS master
 > $ roscore
2. start rosserial
 > $ rosrun rosserial_python serial_node.py /dev/ttyACM0 _baud:=80000
  
