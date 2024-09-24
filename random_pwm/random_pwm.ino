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

const uint8_t ledPin = 16;  // GPIO 16 for LED
const uint32_t delayAmount = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  randomSeed(analogRead(0));  // seed random number
}

void loop() {
  long value = random(0, 255);
  analogWrite(ledPin, value);  // writes a random value
  delay(delayAmount);
}