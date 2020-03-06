import time
import serial
import requests

ser = serial.Serial(
        port='/dev/ttyACM0',
        baudrate = 9600,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        bytesize=serial.EIGHTBITS,
        timeout=1
)

while 1:
	x=ser.readline()
	if len(x)>60:
		value1=x.split("+CGNSINF: ")
		splitString=value1[1].split(",")
		timestamp=splitString[2]
		latitude=float(splitString[3])
		longitude=float(splitString[4])
		altitude=splitString[5]
		speed=float(splitString[6])
		direction=float(splitString[7])
		acuracy=splitString[8]
		myobj = {
			"latitude": latitude,
			"longitude": longitude,
			"direction": direction
		}
		response = requests.post('http://192.168.8.101:5000/findGoal' ,json=myobj)
		print response.content
	
