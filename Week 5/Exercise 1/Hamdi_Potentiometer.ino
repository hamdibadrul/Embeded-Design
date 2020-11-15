int potentio = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   
  pinMode(potentio, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  
  val = analogRead(potentio);
  Serial.println(val);

}
