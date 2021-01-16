#include <LiquidCrystal_I2C.h>
#include <string.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define BUTTON_1_PIN 2
#define BUTTON_2_PIN 3
#define BUTTON_3_PIN 4
#define BUTTON_4_PIN 5
#define BUTTON_5_PIN 6
#define BUTTON_6_PIN 7
#define BUTTON_7_PIN 8
#define BUTTON_8_PIN 9
#define BUTTON_9_PIN 10
int button_A1, button_A2, button_A3, button_B1, button_B2, button_B3, button_C1, button_C2, button_C3;
byte x_1 = B00000;
byte x_2 = B01010;
byte x_3 = B00100;
byte x_4 = B01010; // initialize X shape bytes
byte o_1 = B00000;
byte o_2 = B01110;
byte o_3 = B01010;
byte o_4 = B01110; // initialize O shape bytes
byte zero = B00000;
byte a,b,c,d,e,f,g,h,i,j,k,l; // global variable to change shape in each byte

int total_count = 0;

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
        total_count++;
        lastState = ButtonState;
      }
      lastState = ButtonState;
    return count;
    }
}; 

void tick_x(){
  if (button_A1 == 1 && button_A2 == 0){                           // 1 _ _
    a = x_1, b = x_2, c = x_3, d = x_4, e=f=g=h=zero;             // 0 _ _
    lcd.setCursor(0,0); 
    lcd.write(0);
  } 
  if (button_A1 == 1 && button_A2 == 1){                           // 1 _ _
    a = x_1, b = x_2, c = x_3, d = x_4;                           // 1 _ _
    e = x_1, f = x_2, g = x_3, h = x_4;
    lcd.setCursor(0,0); 
    lcd.write(0);
  }
  if (button_A1 == 0 && button_A2 == 1){                        // 0 _ _
    e = x_1, f = x_2, g = x_3, h = x_4;                        // 1 _ _
    a=b=c=d=zero;
    lcd.setCursor(0,0); 
    lcd.write(0);
  }
  if (button_B1 == 1 && button_B2 == 0){
    a = x_1, b = x_2, c = x_3, d = x_4, e=f=g=h=zero;          // _ 1 _
    lcd.setCursor(1,0);                                        // _ 0 _
    lcd.write(0);
  } 
  if (button_B1 == 1 && button_B2 == 1){
    a = x_1, b = x_2, c = x_3, d = x_4;                        // _ 1 _
    e = x_1, f = x_2, g = x_3, h = x_4;                        // _ 1 _
    lcd.setCursor(1,0); 
    lcd.write(0);
  }
  if (button_B1 == 0 && button_B2 == 1){
    e = x_1, f = x_2, g = x_3, h = x_4;                        // _ 0 _
    a=b=c=d=zero;                                              // _ 1 _
    lcd.setCursor(1,0); 
    lcd.write(0);
  }
  if (button_C1 == 1 && button_C2 == 0){
    a = x_1, b = x_2, c = x_3, d = x_4, e=f=g=h=zero;          // _ _ 1
    lcd.setCursor(2,0);                                        // _ _ 0
    lcd.write(0);
  } 
  if (button_C1 == 1 && button_C2 == 1){
    a = x_1, b = x_2, c = x_3, d = x_4;                       // _ _ 1
    e = x_1, f = x_2, g = x_3, h = x_4;                       // _ _ 1
    lcd.setCursor(2,0); 
    lcd.write(0);
  }
  if (button_C1 == 0 && button_C2 == 1){
    e = x_1, f = x_2, g = x_3, h = x_4;                       // _ _ 0
    a=b=c=d=zero;                                             // _ _ 1
    lcd.setCursor(2,0); 
    lcd.write(0);
  }
  if (button_A3 == 1){
    i = x_1, j = x_2, k = x_3, l = x_4;                      // last row 1 _ _
    lcd.setCursor(0,1);                                      
    lcd.write(1);                                            
  }
  if (button_B3 == 1){
    i = x_1, j = x_2, k = x_3, l = x_4;                      // last row _ 1 _
    lcd.setCursor(1,1);
    lcd.write(1); 
  }
  if (button_C3 == 1){
    i = x_1, j = x_2, k = x_3, l = x_4;                     // last row _ _ 1
    lcd.setCursor(2,1);
    lcd.write(1); 
  }
  
}

void tick_o(){                                              // same with X shape location
   if (button_A1 == 1 && button_A2 == 0){
    a = o_1, b = o_2, c = o_3, d = o_4, e=f=g=h=zero;
    lcd.setCursor(0,0); 
    lcd.write(0);
  } 
  if (button_A1 == 1 && button_A2 == 1){
    a = o_1, b = o_2, c = o_3, d = o_4;
    e = a, f = b, g = c, h = d;
    lcd.setCursor(0,0); 
    lcd.write(0);
  }
  if (button_A1 == 0 && button_A2 == 1){
    e = o_1, f = o_2, g = o_3, h = o_4;
    a=b=c=d=zero;
    lcd.setCursor(0,0); 
    lcd.write(0);
  }
  if (button_B1 == 1 && button_B2 == 0){
    a = o_1, b = o_2, c = o_3, d = o_4, e=f=g=h=zero;
    lcd.setCursor(1,0); 
    lcd.write(0);
  } 
  if (button_B1 == 1 && button_B2 == 1){
    a = o_1, b = o_2, c = o_3, d = o_4;
    e = a, f = b, g = c, h = d;
    lcd.setCursor(1,0); 
    lcd.write(0);
  }
  if (button_B1 == 0 && button_B2 == 1){
    e = o_1, f = o_2, g = o_3, h = o_4;
    a=b=c=d=zero;
    lcd.setCursor(1,0); 
    lcd.write(0);
  }
  if (button_C1 == 1 && button_C2 == 0){
    a = o_1, b = o_2, c = o_3, d = o_4, e=f=g=h=zero;
    lcd.setCursor(2,0); 
    lcd.write(0);
  } 
  if (button_C1 == 1 && button_C2 == 1){
    a = o_1, b = o_2, c = o_3, d = o_4;
    e = a, f = b, g = c, h = d;
    lcd.setCursor(2,0); 
    lcd.write(0);
  }
  if (button_C1 == 0 && button_C2 == 1){
    e = o_1, f = o_2, g = o_3, h = o_4;
    a=b=c=d=zero;
    lcd.setCursor(2,0); 
    lcd.write(0);
  }
  if (button_A3 == 1){
    i = o_1, j = o_2, k = o_3, l = o_4;
    lcd.setCursor(0,1);
    lcd.write(1); 
  }
  if (button_B3 == 1){
    i = o_1, j = o_2, k = o_3, l = o_4;
    lcd.setCursor(1,1);
    lcd.write(1); 
  }
  if (button_C3 == 1){
    i = o_1, j = o_2, k = o_3, l = o_4;
    lcd.setCursor(2,1);
    lcd.write(1); 
  }
  
}

void shape(){
  byte display_lcd_top[] = {   // display shape first 8 bytes (top)  
    a,
    b,
    c,
    d,
    e,
    f,
    g,
    h
  }; 

  byte display_lcd_btm[] = {   // display shape second 8 bytes (bottom)
    i,
    j,
    k,
    l,
    B00000,
    B00000,
    B00000,
    B00000
  };  

  lcd.createChar(0, display_lcd_top); // custom character first 2 rows 
  lcd.createChar(1, display_lcd_btm); // custom character for last row
  
  int var = total_count % 2; // calculation to change player
  if (var == 1){ 
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    tick_x(); // player 1 move
  }
  else {
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    tick_o(); // player 2 move
  }
}

Button A_1(BUTTON_1_PIN); //assign pin 2 
Button A_2(BUTTON_2_PIN); //assign pin 3 
Button A_3(BUTTON_3_PIN); //assign pin 4 
Button B_1(BUTTON_4_PIN); //assign pin 5  
Button B_2(BUTTON_5_PIN); //assign pin 6 
Button B_3(BUTTON_6_PIN); //assign pin 7
Button C_1(BUTTON_7_PIN); //assign pin 8 
Button C_2(BUTTON_8_PIN); //assign pin 9
Button C_3(BUTTON_9_PIN); //assign pin 10


void setup() { 
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  lcd.begin();
  lcd.home(); 
}

void loop() {
    
    button_A1 = A_1.operation(); 
    button_A2 = A_2.operation();
    button_A3 = A_3.operation();
    button_B1 = B_1.operation();
    button_B2 = B_2.operation();
    button_B3 = B_3.operation();
    button_C1 = C_1.operation();
    button_C2 = C_2.operation();
    button_C3 = C_3.operation(); // process of counting in class Button

   shape(); // go shape function

}
