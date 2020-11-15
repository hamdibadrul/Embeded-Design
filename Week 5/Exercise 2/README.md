# ADC Reading - AVR language with arduino 

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

**Step 1 - Video**

Youtube link here: https://www.youtube.com/watch?v=pint2CxllqY

[![Exercise 1](https://img.youtube.com/vi/pint2CxllqY/0.jpg)](https://www.youtube.com/watch?v=pint2CxllqY)

**Step 2 - Circuit Wiring**
<details>
<summary>"Click to expand"</summary>

<p align = "centre">
  
<img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Potentiometer%20Circuit%20fritzing%20picture.PNG" width = "400" height = "600" /> <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Potentiometer%20Circuit.jpeg" width = "500" height = "500" />
 
Simply complete the circuit connection according to the picture above. </br>
You can download the fritzing file here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/potentionmeter%20fritzing%20connection.fzz"> Fritzing File (.fzz) </a>
</details>

**Step 3 - Arduino Programming**

<details>
<summary>"Click to expand"</summary>

![Code 2](https://user-images.githubusercontent.com/73819661/99189728-7cad1a00-279d-11eb-8f00-28c2dfd7d8b3.PNG)

To initialize admux, adcsra, adch and adcl must look at their datasheet to understand which bits to be set. </br>
Here is for ADMUX: </br>
![ADMUX](https://user-images.githubusercontent.com/73819661/99189819-2ee4e180-279e-11eb-81f9-7559752d3c62.PNG)
![Admux 2](https://user-images.githubusercontent.com/73819661/99189820-30aea500-279e-11eb-9d1c-778945d3af62.PNG)

Here is for ADSCRA: </br>
![ADCSRA](https://user-images.githubusercontent.com/73819661/99189855-63589d80-279e-11eb-8aee-37f878b7ec5f.PNG)
![ADSCRA 2](https://user-images.githubusercontent.com/73819661/99189853-62277080-279e-11eb-9643-eefe0fb0db88.PNG)

Here is for ADCH and ADCL: </br> 
![ADCH and ADCL](https://user-images.githubusercontent.com/73819661/99189900-900cb500-279e-11eb-836e-869300498ca5.PNG)

From these pictures, we can understand why the initialisation for each registers based on the requirement. Additionally, to understand more on ADC (adch and adcl), 
you can refer to this link --> <a href="https://www.newbiehack.com/MicrocontrollersADC10Bits.aspx"> Arduino Code </a>

 You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Exercise%201/Hamdi_Potentiometer.ino"> Arduino Code </a>
 
</details>


**Step 4 - Conclusion** 
This is a simple tutorial to read the value of ADC from arduino using AVR language.
