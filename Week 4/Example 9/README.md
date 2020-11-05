# Multiple LEDs blinking with different On and Off duration

Hi, this example shows multiple LED blinking with different time connected on arduino nano.
This example uses Object Oriented Programming. 

**Components needed:** </br>
Arduino Nano/Uno </br>
1 x 1k ohm Resistor </br>
8 x LED </br>
1 x breadboard </br>
Few jumpers accordingly </br>

The time for blinking on each LED is shown below. </br>
![On Off Duration](https://user-images.githubusercontent.com/73819661/98286597-327aaa80-1fdf-11eb-954d-f9cc6f6a61b8.PNG)

**Step 1 - Video**

Youtube link here: https://www.youtube.com/pMLOxV53doc

[![Example 9](https://img.youtube.com/vi/pMLOxV53doc/0.jpg)](https://www.youtube.com/watch?v=pMLOxV53doc)

**Step 2 - Circuit Wiring**
<details>
<summary>"Click to expand"</summary>
<p align = "centre">
  <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%209/Multi%20LED%20Circuit%20Diagram.PNG" width = "500" height = "300" />   <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%209/Multiple%20LED%20circuit.jpeg" width = "400" height = "400" />
 
Simply complete the circuit connection according to the picture above. I don't want to mess my circuit with many resistors, hence I share 1 resistor with all LED before connecting
them to ground. Thus the anode of each LED need to be connected to the digital pin of Arduino. When all LED is running together, all the current will pass through this one
resistor. I believe this is not a good practice if we run multiple devices that use a lot of current. Luckily, this tutorial just use few amount of current as just to light up the LEDs.
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>

![code1](https://user-images.githubusercontent.com/73819661/98288051-390a2180-1fe1-11eb-94a3-cd4305ee3df2.PNG)</br>
![code2](https://user-images.githubusercontent.com/73819661/98288055-3a3b4e80-1fe1-11eb-87bc-fc9bba6be673.PNG)</br>
![code3](https://user-images.githubusercontent.com/73819661/98288058-3b6c7b80-1fe1-11eb-9c1d-3af6d9310f55.PNG)</br>
  
 I use Object Oriented Programming (OOP). The advantage of using OOP is you can add as many LED you want with different timing but using only one class function.
 As you can see, only one initialization needed to set multiple LED inside **void init()** function. This is the beauty of using OOP.
 Note that in the LED default function where it wrote **this-> pin = pin** is to assign the passed value to the private variable. We don't use delay() function, instead
 we need to use millis() to run multiple LEDs with different time. 
 
 You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%204/Example%209/Hamdi_Multple_LED.ino"> Arduino Code </a>
 
</details>


**Step 4 - Conclusion** 

This is a simple blinking tutorial with different on and off duration. OOP coding is an advantage where we can add more LEDs using the same class function. 
This tutorial use millis() function instead of delay() because we want to run all LEDs at the same time with different on and off duration.
