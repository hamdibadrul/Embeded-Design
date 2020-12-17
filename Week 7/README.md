# Interrupt Tutorial with Arduino Nano 

Components needed: </br>
Arduino Nano/Uno </br>
1 x 1k ohm Potentiometer </br>
1 x breadboard </br>
4 x LED </br>
1 x Button </br>

**Step 1 - Video**

Youtube link here: https://www.youtube.com/watch?v=sB3w2-msP_g

[![Exercise 1](https://img.youtube.com/vi/sB3w2-msP_g/0.jpg)](https://www.youtube.com/watch?v=sB3w2-msP_g)

**Step 2 - Circuit Wiring**

<details>
<summary>"Click to expand"</summary>

<p align = "centre">
  
<img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%207/Fritzing%20picture.PNG" width = "500" height = "500" /> <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%207/Circuit.jpeg" width = "450" height = "600" />
 
Simply complete the circuit connection according to the picture above. </br>
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>
You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%207/Interrupt.ino"> Arduino Code </a> 

![Code 1](https://user-images.githubusercontent.com/73819661/102435770-21976d00-4052-11eb-847a-086d247469a6.PNG) </br>
![Code 2](https://user-images.githubusercontent.com/73819661/102435776-23f9c700-4052-11eb-93b2-a3b84ed62359.PNG)

In setup function --> attachInterrupt(digitalPinToInterrupt(button), pressInterrupt, LOW); shows that the pin will be intrupted whenever the value is zero or LOW. When this happen,
it will automatically goes to pressInterrupt function and execute everything inside. However, the code in loop function are still running but the output will prioritize 
the interrupt function when it is executed.
</details>

**Step 4 - Conclusion** 

This is a simple tutorial using Interrupt.
