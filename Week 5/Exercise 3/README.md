# ADC Reading auto trigger mode - AVR language with arduino 

This tutorial will show a modification of <a href="https://github.com/hamdibadrul/Embeded-Design/tree/main/Week%205/Exercise%202"> Exercise 2 </a> to put the ADC in continuously running mode (auto-trigger)

Components needed: </br>
Arduino Nano/Uno </br>
1 x 10k ohm Potentiometer </br>
1 x breadboard </br>
3 x jumper male to male wire </br>

*Step 1 - Video*

Youtube link here: https://www.youtube.com/watch?v=UaEnTvrmgeM

[![Exercise 1](https://img.youtube.com/vi/UaEnTvrmgeM/0.jpg)](https://www.youtube.com/watch?v=UaEnTvrmgeM)

*Step 2 - Circuit Wiring*

<details>
<summary>"Click to expand"</summary>

<p align = "centre">
  
<img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Potentiometer%20Circuit%20fritzing%20picture.PNG" width = "400" height = "600" /> <img src="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Potentiometer%20Circuit.jpeg" width = "500" height = "500" />
 
Simply complete the circuit connection according to the picture above. </br>
You can download the fritzing file here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/potentionmeter%20fritzing%20connection.fzz"> Fritzing File (.fzz) </a>
</details>

*Step 3 - Arduino Programming*

<details>
<summary>"Click to expand"</summary>

![Code 3](https://user-images.githubusercontent.com/73819661/99190318-d7944080-27a0-11eb-98fc-d597cef2d4a3.PNG)

To initialize admux, adcsra, adch and adcl must look at their datasheet to understand which bits to be set. </br>
You can see all the datasheet in <a href="https://github.com/hamdibadrul/Embeded-Design/tree/main/Week%205/Exercise%202"> Exercise 2 </a> </br>
The only modification made is in  adcsra initialization.

Here is for ADSCRA: </br>
![ADCSRA](https://user-images.githubusercontent.com/73819661/99189855-63589d80-279e-11eb-8aee-37f878b7ec5f.PNG)
![ADSCRA 2](https://user-images.githubusercontent.com/73819661/99189853-62277080-279e-11eb-9643-eefe0fb0db88.PNG)

So, when we do this, we dont have to write *adcsra|=0b01000000; in loop function to start conversion of ADC because it is automatically triggered the conversion.

 You can look at the code here --> <a href="https://github.com/hamdibadrul/Embeded-Design/blob/main/Week%205/Exercise%203/Hamdi_Potentio_Auto_Trigger_AVR_language.ino"> Arduino Code </a>
 
</details>


*Step 4 - Conclusion* 

This is a simple tutorial to read the value of ADC from arduino using AVR language.
