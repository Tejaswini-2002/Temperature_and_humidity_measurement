## Temperature_and_humidity_measurement
 
### Objective
To measure Temperature and Humidity with the help of ESP32 with DHT11 Sensor using Arduino IDE.

### Materials required
ESP32, DHT11, 10K ohm resistor, breadboard and jumper wires.

### Concept
The DHT11 sensor is used to measure temperature and relative humidity. This sensor contain a chip that does analog to digital conversion and spit out a digital signal with the temperature and humidity. This makes it very easy to use with any microcontroller. The DHT11 has a smaller range and it’s less accurate. However, sensor readings can be requested for every second. It’s also a bit cheaper. It can measure a temperature range of 0 to 50 ºC and humidity range of 20 to 90. The operating voltage of DHT11 is 3 to 5.5V DC. 
ESP32 is a series of low cost, low-power system on chip microcontroller with integrated Wi-Fi and dual-mode Bluetooth.
Temperature that is sensed with the help of DHT11 sensor will be displayed on the serial monitor in Arduino IDE. 

### Procedure
1. Connections on breadboard: 
• Vcc of DHT11 sensor – 3V3 of the esp32
• Data/Out of the sensor - D4, 3V3 through 10K ohm resistor
• GND of sensor – GND of esp32
2. Open Arduino IDE and go to Sketch > Include Library > Manage Libraries. Then 
search for “DHT” on the Search box and install the DHT library from Adafruit. 
3. After installing the libraries, restart your Arduino IDE. 
4. Write the code in Arduino IDE. 
5. Upload the code to ESP32 board and select the right board and COM port Arduino 
IDE settings. 
6. After uploading the code, open the Serial Monitor at a baud rate of 115200. We will 
get the latest temperature and humidity readings in the Serial Monitor for every two 
seconds.
