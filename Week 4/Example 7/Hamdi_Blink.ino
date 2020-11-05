#define LED_1_PIN 8
#define LED_2_PIN 9

class Led {
  private:
    int pin;
    int LEDState;
    long rememberTime;
  public:
    Led(int pin) {
      // Use 'this->' to make the difference between the
      // 'pin' attribute of the class and the 
      // local variable 'pin' created from the parameter.
      this-> pin = pin;
      
      LEDState = HIGH;
      rememberTime = 0;
      init();
    }
    void init() {
      pinMode(pin, OUTPUT);
    }
    void operation(long onDuration, long offDuration){
      
      if( LEDState == HIGH )
    {
      if( (millis() - rememberTime) >= onDuration)
      {   
      LEDState = LOW;
      rememberTime = millis();
      }
    }
      else
      {   
      if( (millis() - rememberTime) >= offDuration)
      {   
        LEDState = HIGH;
        rememberTime = millis();
      }
    }
      digitalWrite(pin, LEDState);
    }
   
}; 

Led led1(LED_1_PIN); //assign pin 8 to led1 variable 
Led led2(LED_2_PIN); //assign pin 9 to led2 variable

void setup() { }

void loop() {
    led1.operation(750, 350);
    led2.operation(400, 600);
    
}
