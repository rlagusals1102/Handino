#include<Servo.h> 
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;      


void setup() {
  Serial.begin(9600);
  servo_1.attach(12); 
  servo_2.attach(10);
  servo_3.attach(9);
  servo_4.attach(6);
  servo_5.attach(2); 
  delay(500);
  servo_1.write(165);
  servo_2.write(165);
  servo_3.write(165);
  servo_4.write(165);
  servo_5.write(165);
  delay(5000);
}

void loop() {
  while (Serial.available() > 0) {
    char data = Serial.read();
    if (data == 'r') {
       servo_1.write(165);
       servo_2.write(165);
      servo_3.write(165);
       servo_4.write(165);
       servo_5.write(165);   
    }
    if (data == 'p') {
        servo_1.write(0);
        servo_2.write(165);
        servo_3.write(165);
        servo_4.write(0);
        servo_5.write(0); 
    }
     if (data == 's') {
     servo_1.write(0);
     servo_1.write(0);
     servo_2.write(0);
     servo_3.write(0);
     servo_4.write(0);
     servo_5.write(0); 
    }
    if (data == 'n') {
            servo_1.write(165);
       servo_2.write(165);
      servo_3.write(165);
       servo_4.write(165);
       servo_5.write(165); 
    }
  }
}
