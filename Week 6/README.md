# LED brightness with Potentiometer (PWM) 

This tutorial will show you how to write a program that continuously prints out the analog value of PC3 through the serial port. Assume the followings: </br>
•The clock speed of the microcontroller is 16MHz </br>
•The desired clock speed of ADC is 125 kHz. </br>
•Use AVCC as analog reference. </br>
•On-demand mode </br>

Components needed: </br>
Arduino Nano/Uno </br>
1 x 10k ohm Potentiometer </br>
1 x breadboard </br>
3 x jumper male to male wire </br>
1 x LED </br>
1 x 200 ohm resistor </br>

*Step 1 - Video*

Youtube link here: https://www.youtube.com/watch?v=RHOxckYdCNs

[![Exercise 1](https://img.youtube.com/vi/RHOxckYdCNs/0.jpg)](https://www.youtube.com/watch?v=RHOxckYdCNs)

*Step 2 - Circuit Wiring*

<details>
<summary>"Click to expand"</summary>

<p align = "centre">
  
<img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%206/Cicuit%20fritzing.PNG" width = "400" height = "600" /> <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%206/Circuit.jpeg" width = "500" height = "500" />
 
Simply complete the circuit connection according to the picture above. </br>
</details>

*Step 3 - Arduino Programming*

<details>
<summary>"Click to expand"</summary>

![Code](https://user-images.githubusercontent.com/73819661/100587968-3672c180-332c-11eb-8757-7c430586a08b.PNG)

You must use PWM pins in order for this tutorial to work. </br>
Here is the PWM pins for Arduino board. </br>
![PWM pins](https://user-images.githubusercontent.com/73819661/100588115-6e7a0480-332c-11eb-96f1-455ecf6fcffc.PNG)

You can refer the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%206/PWM.ino"> Arduino Code </a>
 
</details>


*Step 4 - Conclusion* 

This tutorial shows how to control LED brightness using PWM pins with potentiometer.
