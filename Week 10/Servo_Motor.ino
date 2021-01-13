 #include <Servo.h>
Servo hamdi_servo;
int Potentio = A0;

void setup() {
  hamdi_servo.attach(5);
  pinMode(Potentio, INPUT);
  Serial.begin(9600);
}

void loop() {
  int input = analogRead(Potentio);
  int val = map(input, 0, 1023, 0, 180);

  hamdi_servo.write(val);
  delay(15);
  Serial.print(input);
  Serial.print("  ");
  Serial.println(val);
}
