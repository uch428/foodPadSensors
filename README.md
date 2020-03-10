# foodPadSensors

Flow and explanation for training and estimating data using ROS  
- Enviroment used to confirm these executions:  Ubuntu 16.04.6 LTS, run on VirtualBox6.1 for Windows 10
- Interface names e.g. ttyACM0 might be different on each device.
- All the files and folders under uch428/footPadSensor/ are located under ~/ros/workspace/myWorkspace/ in my environment.
- Sorry for very rough explanation and programs!
## Set up to establish all the connection
## I. Writnig publisher program on Arduino
1. Using Arduino IDE, upload the publisher program. Refer the prgoram footPadSensor/MCP3208-5-Adcbase.ino
  * Besides installing rosserial, you would also need to change .msg file to make it 8 channels, based on the original adc.msg from the official tutorial which is for 5 channels. Refer to footPadSensor/src/msg/adc1.msg and footPadSensor/Adc.h  
  (Adc.h is supposed to be located in Arduino libraries to be imported by the Arduino publisher program. In my environment for example: ~/ros/arduino-1.x.xx/libraries/ros_lib/rosserial_arduino/Adc.h )
  
## II. Setting up ROS node to receive data from sensors
1. start ROS master  
 > $ roscore
2. Change permission to read data from arduino  
 > $ sudo chmod 666 /dev/ttyACM0  
3. Start rosserial. Baud rate should be same as one written in the Arduino publisher prgoram  
 > $ rosrun rosserial_python serial_node.py /dev/ttyACM0 _baud:=80000  
4. Now you should be able to read data from each sensor by  
 > $ rostopic echo /adc  

## III. Setting up for receiving data from DYMO M10
1. Create and add a line below to a rule file(/etc/udev/rules.d/99-dymo.rules). IDs could be different on each devices, check IDs for the scale lsusb. (Needed only for the first time)
  > SUBSYSTEM=="usb", ATTRS{idVendor}=="0922", ATTR{idProduct}=="8006", MODE="0666"
2. Confirm you are now able to receive raw data from scale by
 > $ sudo cat /dev/usb/hiddraw0  
   *In my environment I needed to re-connect the device few times to gestablish connection, probably because of VirtualBox or its driver setting*
3. Now you should be able to run the program /src/package_i/scripts/scale.py, which simply displays received data from the scale, by
 > $ rosrun package_i scale.py


## Exceuting Calibrating/Estimating programs
## I. Calibration
1. Run

