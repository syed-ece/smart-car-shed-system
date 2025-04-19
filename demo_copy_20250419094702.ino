#include <Servo.h>
Servo servomotor;

void setup() {
  servomotor.attach(3); // servomotor connected to Arduino ~ PWM pin 3
}

void loop() {
  // Analog input from LDR to A1 pin:
  int value = analogRead(A1);

  if (value < 300) {
    servomotor.write(180); // servomotor rotates to 180°
  } else {
    servomotor.write(0);   // servomotor rotates to 0°
  }
}
