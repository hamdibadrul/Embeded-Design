int button = 2;
int LED1 = 5;
int LED2 = 7;
int LED3 = 9;
int emergency_LED = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(emergency_LED, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(button), pressInterrupt, LOW);

  Serial.begin(9600);
  digitalWrite(emergency_LED, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}
void loop() {
    light_up();
}

void light_up(){
    digitalWrite(emergency_LED, LOW);
    digitalWrite(LED1, HIGH);
    delay(2000);
    digitalWrite(LED2, HIGH);
    digitalWrite(emergency_LED, LOW);
    delay(2000);
    digitalWrite(LED3, HIGH);
    digitalWrite(emergency_LED, LOW);
    delay(2000);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(emergency_LED, LOW);
    delay(2000);
}

void pressInterrupt(){
    digitalWrite(emergency_LED, HIGH);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);

}
