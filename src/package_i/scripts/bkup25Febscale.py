#!/usr/bin/env python
import rospy
import usb.util
import usb.core

# find the USB device
dev = usb.core.find(idVendor = 0x0922, idProduct = 0x8006)
if not dev: print"usb.core.find no results"

c=1
for config in dev:
	print 'config', c
	print 'Interface', config.bNumInterfaces
	for i in range(config.bNumInterfaces):
		if dev.is_kernel_driver_active(i):
			dev.detach_kernel_driver(i)
		print i
	c+=1	
#dev1 = usb.core.find(find_all=True)
#print(dev)
# use the default configuration

#dev.set_interface_altsetting(interface = 0, alternate_setting = 1)
dev.set_configuration()

# first endpoint
endpoint = dev[0][(0,0)][0]

# read a data packet
attempts = 10
data = None		

#data = dev.read(endpoint.bEndpointAddress, endpoint.wMaxPacketSize)

while data is None and attempts > 0:
	try:
		data = dev.read(endpoint.bEndpointAddress,
				endpoint.wMaxPacketSize)
		print data
		print '--'
		
	except usb.core.USBError as e:
		print(e)
		data = None
		print(e.args)
#		if e.args == ('Operation timed out',):

		attempts -= 1
		print 'a'
		continue
print(data)
