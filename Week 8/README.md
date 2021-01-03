# EEPROM Tutorial with Arduino 

This tutorial will show you the function of EEPROM in Arduino.
Components needed: </br>
Arduino Nano/Uno </br>

**Step 1 - Video**

Youtube link here: https://www.youtube.com/watch?v=wp5FtGw4-8Y&feature=youtu.be

[![Exercise 1](https://img.youtube.com/vi/wp5FtGw4-8Y/0.jpg)](https://www.youtube.com/watch?v=wp5FtGw4-8Y&feature=youtu.be)

**Step 2 - Circuit Wiring**

There is no circuit needed in this tutorial. You just need to connect your arduino board with your computer.

**Step 3 - Arduino Programming**

You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%208/EEPROM.ino"> Arduino Code </a> 

![Code](https://user-images.githubusercontent.com/73819661/103474523-ca2e2680-4ddf-11eb-9d7e-82dbfefbebe2.PNG)

From this code, the results will show you two values in serial print. One is for EEPROM value while the other is for value stored in a variable called 'count'.
When reset button is pressed, the value of count will be reset to zero while the value stored in EEPROM will continue based on previous before it is reset.
The value stored in EEPROM will only be reset to zero if it reaches the 255.
 
**Step 4 - Conclusion** 

This tutorial shows that EEPROM is a type of non-volatile memory.
