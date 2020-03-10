//#include <ArduinoTcpHardware.h>
//#define USB_USBCON
#include <ros.h>
#include <ArduinoHardware.h>

#include <ros.h>
#include <ros/time.h>
#include <sensor_msgs/FluidPressure.h>
#include <Mcp320x.h>
#include <SPI.h>
#include <rosserial_arduino/Adc.h>
#include <package_i/my_message_i.h>

#define SPI_CS  53  // spi slave select
#define ADC_VREF  5000 // V_ref
#define ADC_CLK 1600000 // spi clock 1.6MHz

MCP3208 adc(ADC_VREF, SPI_CS);

ros::NodeHandle  nh;
rosserial_arduino::Adc adc_msg;
ros::Publisher pub("adc", &adc_msg);

const int analog_pin = 0;
unsigned long range_timer;
char frameid[] = "/mcp3208";

void setup()
{
  nh.initNode();
  nh.advertise(pub);
  //fp_msg.header.frame_id = frameid;
  pinMode(SPI_CS, OUTPUT);
  digitalWrite(SPI_CS, HIGH);
  Serial.begin(80000); //115200
  SPISettings settings(ADC_CLK, MSBFIRST, SPI_MODE0);
  SPI.begin();
  SPI.beginTransaction(settings);
}

void printSerialMonitor(uint16_t raw[8]/*, uint16_t val[8]*/, uint32_t t1, uint32_t t2)
{
  int sensorNum;
  Serial.println("Raw ");
  for(sensorNum = 0; sensorNum<8; sensorNum++)
  {
    Serial.print(sensorNum+1);
    Serial.print(": ");
    Serial.print(raw[sensorNum]);
    Serial.print(" mV");
    Serial.println(",");
  }
  
  // sampling time
  Serial.print("sampling time: ");
  Serial.print(static_cast<double>(t2-t1)/1000, 4);
  Serial.println("ms");
  Serial.println("===================");
}

void loop()
{
  /*
  uint32_t t1;
  uint32_t t2;
  Serial.println("Reading...");
  t1 = micros();
  */
  uint16_t raw[8];

  raw[0] = adc.read(MCP3208::Channel::SINGLE_0);
  raw[1] = adc.read(MCP3208::Channel::SINGLE_1);
  raw[2] = adc.read(MCP3208::Channel::SINGLE_2);
  raw[3] = adc.read(MCP3208::Channel::SINGLE_3);
  raw[4] = adc.read(MCP3208::Channel::SINGLE_4);
  raw[5] = adc.read(MCP3208::Channel::SINGLE_5);
  raw[6] = adc.read(MCP3208::Channel::SINGLE_6);
  raw[7] = adc.read(MCP3208::Channel::SINGLE_7);

  adc_msg.adc0 = raw[0];
  adc_msg.adc1 = raw[1];
  adc_msg.adc2 = raw[2];
  adc_msg.adc3 = raw[3];
  adc_msg.adc4 = raw[4];
  adc_msg.adc5 = raw[5];
  adc_msg.adc6 = raw[6];
  adc_msg.adc7 = raw[7];

 // t2 = micros();

 // printSerialMonitor(raw, t1, t2);
  
 // fp_msg.header.stamp = nh.now();
 // adc_msg.header.stamp =nh.now();
 // fp_msg.fluid_pressure = val[1];
  
  //pub_FP.publish(&fp_msg);
  pub.publish(&adc_msg);
  nh.spinOnce();
  
  delay(10); 
}
