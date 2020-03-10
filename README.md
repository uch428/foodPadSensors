# foodPadSensors

This is to help you first set up connections between barometric pressure sensors on Arduino, a digital weight scale, and ROS. Having done the set-up, with some programs you can obtain the estimated value of weight from sensor data after calibrating them using a scale. (Applied/estimated pressure should be only one directional for now).
- The enviroment used to confirm all the exaplanations:  Ubuntu 16.04.6 LTS, run on VirtualBox6.1 for Windows 10
- Interface names e.g. `ttyACM0` might be different on each device.
- All the files and folders here under `uch428/footPadSensor/` are located under `~/ros/workspace/myWorkspace/` in my environment.
- Sorry for very rough explanations and programs!
  
  
# Overview
### src/package_i/scripts/ 
- contains most main programs such as calibration, training, and estimation programs.
### data/
contains CSV/figures results of calibration/estimation that I have done. Explained in the result discussion part below.
### csv files directly under root(footPadSensor/)
These files such as `calibration.csv` are exported everytime after running programs such as `calibration.py`, which will be required afterwars by other programs. e.g. Values of `calibration.csv` will be used in `train.py` to output `parameters.csv`
  
  
# Set-up for establishing all the connections
## I. Writnig publisher program on Arduino
1. Using Arduino IDE, upload the publisher program. Refer the program footPadSensor/MCP3208-5-Adcbase.ino
  * Besides installing rosserial, you would also need to change .msg file to make it 8 channels, based on the original adc.msg from the official ros tutorial which is for 5 channels. Refer to footPadSensor/src/msg/adc1.msg and footPadSensor/Adc.h  
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
  
  
# Exceuting Calibration/Estimation/Recording programs
## I. Calibration
While keep running `roscore` and `rosserial` in other terminals, run calibration.py by
 > $ rosrun package_i calibration.py  
  - Confirm that available data from sensors and the scale are displayed.
  - You can now put a pressure on the foot pad sensor toward the scale. Until you stop the program by Crtl+C, it keeps recording both voltage values from sensors and weight values from  the scale. Recorded results will be saved in footPadSensor/calibration.csv
  Refer to @@@@@@ for some tips on this calibration process.
 ## II. Training
Run `train.py` to output parameters.
 > $ rosrun package_i train.py
 - This program simply calculates a regression line with a pseudo-inverse matrix based on data from the previous calibration step. It outputs pinv.csv and parameters.csv. The latter one will be used in a next step.
 ### III. Estimation
 Run `estimate.py` to obtain weight value estimated from sensor data. Stop the program with Ctrl+C.
 > $ rosrun package_i estimate.py
 - If the previous calibration was successful, this program outputs values which must be close to the actual pressure.
 ### IV. Record estimation process.
  Although `estimate.py` is just to display the result, You also can record the result of estimation with `plotResult.py`. 
  > $ rosrun package_i plotResult.csv
  - Once it started, the program records values from sensors and the applied pressure on a scale then exports `plotResult.csv`  
 ### V. Plot results with figures
  `graphPlot.py` will genrate some figures such as fig_calibration.png, fig_results.csv, and fig_errors.
  > $ rosrun package_i graphPlot.py
  - `fig_calibration.png` shows how you calibrated during the process of I. Calibration so that you can know distributions of measured samples for each pressure range.
  - `fig_results.png` shows simply the process of recording. X-axis shows data index which also you can suppose time.
  - `fig_error.png` show you how much correcct this estimation process was. A blue line shows ideal case which must be same as weight measured in the actual scale. Blue dots are the esimated value per each weight.
  
  
# Result and Discussion
  - I will update this part soon.

