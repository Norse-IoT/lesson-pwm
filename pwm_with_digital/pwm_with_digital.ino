/**
 * I've chosen to use standard integer types to illustrate the bounds of PWM.
 * These standard integer types make it clearer exactly how many bits you're using.
 * 
 * For example:
 *    "uint8_t" is an unsigned eight bit integer (from 0 to 255)
 *    "uint32_t" is an unsigned thirty-two bit integer (from 0 to 4,294,967,295)
 * 
 * In normal C code, we could use "#include <stdint.h>" to get the same effect. 
 */

uint8_t ledPin = 16;
uint32_t frequency = 1000; // Hz
uint8_t dutyCycle = 10; // 50% duty cycle (0-255)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  uint32_t onTime = (dutyCycle / UINT8_MAX) * frequency;
  uint32_t offTime = frequency - onTime;

  digitalWrite(ledPin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(ledPin, LOW);
  delayMicroseconds(offTime);
}
