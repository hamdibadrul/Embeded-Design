
#define BUTTON_1_PIN 2
#define BUTTON_2_PIN 3
#define BUTTON_3_PIN 4
#define BUTTON_4_PIN 5
#define BUTTON_5_PIN 9

class Button {
  private:
    int pin;
    int ButtonState, lastState;
    int count;
  public:
    Button(int pin) {
      // Use 'this->' to make the difference between the
      // 'pin' attribute of the class and the 
      // local variable 'pin' created from the parameter.
      this-> pin = pin;
      
      count = 0;
      lastState = HIGH;
      init();
    }
    
    void init() {
      pinMode(pin, INPUT_PULLUP);
    }
    
    int operation(){
      ButtonState = digitalRead(pin);
      if( ButtonState != lastState && ButtonState == LOW ) {
        count++;
        lastState = ButtonState;
      }
      lastState = ButtonState;
    return count;
    }
}; 


Button A(BUTTON_1_PIN); //assign pin 2 to A variable 
Button B(BUTTON_2_PIN); //assign pin 3 to B variable 
Button C(BUTTON_3_PIN); //assign pin 4 to C variable 
Button D(BUTTON_4_PIN); //assign pin 5 to D variable 
Button E(BUTTON_5_PIN); //assign pin 9 to E variable 

void setup() { 
  Serial.begin(9600); 
}

void loop() {
  int button_A, button_B, button_C, button_D, button_E;
  
    button_A = A.operation();
    button_B = B.operation();
    button_C = C.operation();
    button_D = D.operation();
    button_E = E.operation();

    Serial.print("A = "); Serial.print(button_A); Serial.print("\t");
    Serial.print("B = "); Serial.print(button_B); Serial.print("\t");
    Serial.print("C = "); Serial.print(button_C); Serial.print("\t");
    Serial.print("D = "); Serial.print(button_D); Serial.print("\t");
    Serial.print("E = "); Serial.println(button_E);
}
