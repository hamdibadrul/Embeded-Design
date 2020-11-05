# 5 button press count with arduino Nano 

Hi, this example shows 5 buttons press count using arduino nano.
The microcontroller will keep track of how many times each button has been pressed.
This example uses Object Oriented Programming. 

**Components needed:** <br>
Arduino Nano </br>
5 x button </br>
1 x breadboard </br>
Few male to male wire accordingly  </br>
I am using internal pull up, hence I dont use any resistor in this tutorial

**Step 1 - Video**

Youtube link here: https://www.youtube.com/watch?v=uGfh0A5FXgg

[![Example 7](https://img.youtube.com/vi/uGfh0A5FXgg/0.jpg)](https://www.youtube.com/watch?v=uGfh0A5FXgg)

**Step 2 - Circuit Wiring**
<details>
<summary>"Click to expand"</summary>
<p align = "centre">
  <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%208/Button%20Circuit%20Diagram.PNG" width = "600" height = "400" />   <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%208/Button%20Circuit.jpeg" width = "500" height = "400" />
 
Simply complete the circuit connection according to the picture above. Note that I used internal PULL UP, hence we dont need any resistor, but please be aware that the button will count up when the value is **LOW**.
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>

![Code1](https://user-images.githubusercontent.com/73819661/98274575-8cbf3f80-1fce-11eb-94ad-ef85201f4b8a.PNG) </br>
![Code2](https://user-images.githubusercontent.com/73819661/98274584-8f219980-1fce-11eb-80bc-94abb712b6b9.PNG) 
  
 I use Object Oriented Programming (OOP), thus the code look simpler for 5 buttons. As you can see, the initialization for each pin to be **INPUT_PULLUP** only written once and this
 is the beauty of OOP. Thus, in void setup function only need to write the Serial.begin() to display our result.
 
 You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%208/Hamdi_Button.ino"> Arduino Code </a>
 
</details>


**Step 4 - Conclusion** 

This is a tutorial to count how many times each button has been pressed. Object Oriented Programming was used to make the code simpler and shorter. 
This tutorial also uses internal pull up so that you dont have to mess your circuit.
