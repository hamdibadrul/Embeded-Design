# Arduino Tutorial - Flappy Bird with LCD and Button

Components needed: </br>
Arduino Uno </br>
1 x LCD 16x2
1 x breadboard </br>
1 x Button </br>
8 x jumper male to male wire </br>

**Step 1 - Video**

Youtube link here: https://www.youtube.com/watch?v=VSc9l0q6Va4

[![Exercise 1](https://img.youtube.com/vi/VSc9l0q6Va4/0.jpg)](https://www.youtube.com/watch?v=VSc9l0q6Va4)

**Step 2 - Circuit Wiring**

<details>
<summary>"Click to expand"</summary>

<p align = "centre">
  
<img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Assignment%202/Fritzing.PNG" width = "500" height = "500" />

Simply complete the circuit connection according to the picture above. </br>
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>
You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Assignment%202/flappy_bird_ino.ino"> Arduino Code </a>

However, you need to ensure you have download the LCD library first in your Arduino Software. Download it here --> <a href="https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library"> LCD Library </a>
</br> Next, you have to make sure to know the LCD address by using <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Assignment%202/Scan_address.ino"> Scan Address Code </a>

![Scan address](https://user-images.githubusercontent.com/73819661/104560392-c4a6cb00-5680-11eb-99e1-3550e34def23.PNG)

As you can see, this is my LCD address, however, you might get different adress. Thus you should adjust the address here. 
![Change address](https://user-images.githubusercontent.com/73819661/104560596-0fc0de00-5681-11eb-80d5-f4fa33677267.PNG)

</details>


**Step 4 - Conclusion** 

This tutorial shows a flappy bird game using LCD and button with arduino. Note that we need to use interrupt pin for button.
