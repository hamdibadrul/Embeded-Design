#define LED_1_PIN 2
#define LED_2_PIN 3
#define LED_3_PIN 4
#define LED_4_PIN 5
#define LED_5_PIN 6
#define LED_6_PIN 7
#define LED_7_PIN 8
#define LED_8_PIN 9

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


Led led1(LED_1_PIN); //assign pin 2 to led1 variable 
Led led2(LED_2_PIN); //assign pin 3 to led2 variable 
Led led3(LED_3_PIN); //assign pin 4 to led3 variable 
Led led4(LED_4_PIN); //assign pin 5 to led4 variable 
Led led5(LED_5_PIN); //assign pin 6 to led5 variable 
Led led6(LED_6_PIN); //assign pin 7 to led6 variable 
Led led7(LED_7_PIN); //assign pin 8 to led7 variable 
Led led8(LED_8_PIN); //assign pin 9 to led8 variable 

void setup() {  }

void loop() {
    led1.operation(781, 515);
    led2.operation(2014, 1348);
    led3.operation(343, 573);
    led4.operation(678, 1839);
    led5.operation(342, 534);
    led6.operation(1478, 326);
    led7.operation(1859, 351);
    led8.operation(777, 888);
}
