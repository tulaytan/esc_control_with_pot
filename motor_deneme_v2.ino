#include <Servo.h>
Servo ESC;     // create servo object to control the ESC
int potValue; // value from the analog pin
int pwm;
void setup() {
  // Attach the ESC on pin 9
  ESC.attach(9,1000,1610); // (pin, min pulse width, max pulse width in microseconds) 
}
void loop() {
  potValue = analogRead(A0);   // reads the value of the potentiometer (value between 0 and 1023)
  pwm = map(potValue, 0, 1023, 0, 180);   // scale it to use it with the servo library (value between 0 and 180)
  ESC.write(pwm);    // Send the signal to the ESC
}
