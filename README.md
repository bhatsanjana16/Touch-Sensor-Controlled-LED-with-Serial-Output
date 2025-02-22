# Touch-Sensor-Controlled-LED-with-Serial-Output

Overview
This project uses a touch sensor to control an LED. When the touch sensor is activated, the LED turns on and a message is printed to the serial monitor. The code is designed for use with an Arduino-based microcontroller and utilizes a touch sensor connected to pin 4 and an LED connected to pin 33.

Components Needed:
Touch Sensor Module
LED
Arduino or compatible microcontroller
Resistor (optional for LED)
Jumper wires
Pin Connections:
Touch Sensor:
VCC to 5V or 3.3V (depending on the sensor model)
GND to GND
SIG to Digital Pin 4 (can be adjusted in the code)
LED:
Anode (long leg) to Digital Pin 33 (can be adjusted in the code)
Cathode (short leg) to GND (through a current-limiting resistor)
Code Explanation:
Pin Setup:

Pin 33 is set as an OUTPUT for controlling the LED.
Pin 4 is set as an INPUT for reading the touch sensor state.
Loop Function:

The loop() checks if the touch sensor is triggered (i.e., when digitalRead(touch) returns HIGH).
If the sensor is activated, it lights up the LED (digitalWrite(LED, HIGH)) and sends a message to the serial monitor.
If the touch sensor is not activated, the LED is turned off (digitalWrite(LED, LOW)).
Setup Instructions:
Connect the touch sensor to the Arduino as outlined above.
Attach the LED to the specified pin and ensure it is connected to ground via a resistor.
Open the Arduino IDE and paste the code into a new sketch.
Upload the code to your Arduino board.
Open the Serial Monitor at a baud rate of 115200 to see the output message when the touch sensor is activated.
Serial Output:
When the touch sensor is triggered, the following message will be displayed in the Serial Monitor:
bash
Copy
touch sensor activated
Troubleshooting:
Ensure that the touch sensor is properly connected and that the LED is in the correct orientation.
If the LED does not light up, check the resistor value and ensure it is not too high (typically 220-330 ohms).
Make sure the touch sensor works reliably; some sensors may need to be calibrated or may have varying sensitivity.
