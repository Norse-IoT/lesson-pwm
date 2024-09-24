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

int ledPin = 16;
int frequency = 1000; // Hz
int dutyCycle = 128; // 50% duty cycle

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int onTime = (dutyCycle * 1000) / frequency;
  int offTime = 1000 - onTime;

  digitalWrite(ledPin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(ledPin, LOW);
  delayMicroseconds(offTime);
}
