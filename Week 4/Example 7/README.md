# 2 LED Blinking with different on and off time

Hi, this example shows two LED blinking with two different time connected to PB0 (pin 8) and PB1 (pin 9) on arduino nano.
This example uses Object Oriented Programming.

LED 1 - On time = 750 ms  Off time = 350 ms</br>
LED 2 - On time = 400 ms  Off time = 600 ms

**Components needed:**  </br>
Arduino Nano/Uno </br>
1 x 100 ohm Resistor </br>
2 x LED </br>
1 x breadboard </br>
1 x jumper male to male wire </br>

**Step 1 - Video**

Youtube link here: https://www.youtube.com/F-5wCH4B69Y

[![Example 7](https://img.youtube.com/vi/F-5wCH4B69Y/0.jpg)](https://www.youtube.com/watch?v=F-5wCH4B69Y)

**Step 2 - Circuit Wiring**
<details>
<summary>"Click to expand"</summary>
<p align = "centre">
  <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%207/Circuit%20Diagram%20Blink.PNG" width = "473" height = "400" />   <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%207/Actual%20LED%20Circuit.jpeg" width = "400" height = "600" />
 
Simply complete the circuit connection according to the picture above. This is a simple circuit where we share 1 resistor with 2 LEDs that connected to the ground. Hence, the anode of the LEDs must be connected to the arduino. I used 200 ohm in this example. 
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>

  ![Code1](https://user-images.githubusercontent.com/73819661/98267627-8f1d9b80-1fc6-11eb-9f4a-e3641e9cd73c.PNG) </br>
  ![Code2](https://user-images.githubusercontent.com/73819661/98267903-dc017200-1fc6-11eb-8a4e-5b3942987c21.PNG) 
  
 I use Object Oriented Programming (OOP), thus that is the reason the code looks quite complex for 2 LEDs. The advantage of using OOP is you can add as many LED you want with different timing but using only one class function.
 Note that in the LED default function where it wrote **this-> pin = pin** is to assign the passed value to the private variable. We don't use delay() function, instead
 we need to use millis() to run two LEDs with different time. 
 
 You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%207/Hamdi_Blink.ino"> Arduino Code </a>
 
</details>


**Step 4 - Conclusion** 

This is a simple blinking tutorial with different on and off duration. OOP coding is an advantage where we can add more LEDs using the same class function. 
This tutorial use millis() function instead of delay() because we want to run both LEDs at the same time with different time. 
