/**
 * Setup:
 * 1. Connect a ~100Ω resistor from GPIO pin 16 to the annode (long leg) of the LED
 * 2. Connect the cathode (short leg) of the LED to GND.
 */
 
const int pin = 16;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
}
