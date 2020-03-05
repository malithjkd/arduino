SETUP

EQUPMENTS
	01. sim 808 module (evb 3.2.4)
	02. Arduino Mega
	03. Raspberry pi

CONNECTIONS
	01. Raspberrypi connects to Arduino Mega via USB
	02. SIM808 connect to arduino via serial
		Serial RX,TX on Sim --> Serial1 TX1,RX1 on mega

POWER
	01. RPI 5V input
	02. Arduino 5V from RPI
	03. 5 - 26 V to SIM module Switch on the toggle switch then long press the 
		push button to power up the system

SOFT SETUP
	01. RPI running raspbion and install arduino
	02. Upload "Test1ReadSerial2.ino" to arduino
		Open serial monitor
		Select "Both NL & CR"
		Select 9600 baud

MANUAL INSTRUCTIONS TO SIM808
01. "AT"  --> ok 	// system is up and running 
02. "AT+CGNSPWR=1"  // Power on Glonass
03.	"AT+CGNSINF"	// Sends the Glonass data


