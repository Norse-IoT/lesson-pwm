const int ledPin = 16;  // GPIO 16 for LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // increase the LED brightness
  for (int value = 0; value <= 255; value++) {
    // changing the LED brightness with PWM
    analogWrite(ledPin, value);
    delay(15);
  }

  // decrease the LED brightness
  for (int value = 255; value >= 0; value--) {
    analogWrite(ledPin, value);
    delay(15);
  }
}