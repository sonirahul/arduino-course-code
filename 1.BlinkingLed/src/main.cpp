#include <Arduino.h>

#ifdef ARDUINO_ARCH_ESP32
#define MONITOR_SPEED 115200
#else
#define MONITOR_SPEED 9600
#endif

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(MONITOR_SPEED);
  Serial.print("LED_BUILTIN pin is: ");
  Serial.println(LED_BUILTIN);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  Serial.println("LED is ON");
  delay(100);                    // wait for a second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  Serial.println("LED is OFF");
  delay(100); // wait for a second
}