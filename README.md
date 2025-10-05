Capacitive Touch Relay Control
This Arduino project demonstrates how to control a relay module using a capacitive touch sensor. When the sensor is touched, the relay toggles between ON and OFF states, and the status is printed to the Serial Monitor.

Hardware Connections
Capacitive Touch Sensor connected to Arduino digital pin 8 (ctsPin)

Relay Module connected to Arduino digital pin 9 (relayPin)

Note: This code assumes the relay module is active HIGH, meaning the relay turns ON when the output pin is set HIGH.

Code Description
The sketch initializes the relay in the OFF state.

It continuously reads the capacitive touch sensor state.

On detecting a touch (change from LOW to HIGH), it toggles the relay state.

The new relay state is output to the relay pin and also printed to the Serial Monitor.

A short debounce delay prevents multiple triggers from a single touch.

Usage
Connect the hardware as described.

Upload the sketch to your Arduino board.

Open the Serial Monitor at 9600 baud to view relay status messages.

Touch the capacitive sensor to toggle the relay ON or OFF.
