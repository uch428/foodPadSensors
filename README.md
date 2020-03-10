# foodPadSensors

Flow and explanation for training and estimating data using ROS  
Enviroment used to confirm these executions:  Ubuntu 16.04.6 LTS, run on VirtualBox6.1 for Windows 10

## I. Writnig publisher program on Arduino
1. Using Arduino IDE, upload the publisher program. Refer the prgoram "MCP3208-5-Adcbase.ino" <https://github.com/uch428/footPadSensor/blob/master/MCP3208-5-Adcbase.ino>  
  
## II. Setting up ROS node to receive data from sensors
1. start ROS master  
 > $ roscore  
2. Change permission to read data from arduino  
 > $ sudo chmod 666 /dev/ttyACM0  
3. Start rosserial. Baud rate should be same as one written in the Arduino publisher prgoram  
 > $ rosrun rosserial_python serial_node.py /dev/ttyACM0 _baud:=80000  
4. Now you should be able to read data from each sensor by  
 > $ rostopic echo /adc  

## III. Setting up for scale data
1. 
