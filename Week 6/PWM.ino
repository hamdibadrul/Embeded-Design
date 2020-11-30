int Led = 5;
int Potentio = A0;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Potentio, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int input = analogRead(Potentio);
  int val = map(input, 0, 1023, 0, 255);

  analogWrite(Led, val);
  Serial.print(input);
  Serial.print("  ");
  Serial.println(val);
}
