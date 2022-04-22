## BRIEF EXPLANATION ABOUT WORKING:-
### In this project we have used 8051 microcontroller for controlling the whole process of this project. And a Bluetooth module is used for controlling the home appliances wirelessly. Home appliances will turned ON and OFF when user will touch button in the Bluetooth mobile app in Android mobile phone. To run this project, first we need to download Bluetooth app form Google play store. We can use any Bluetooth app that can send data using Bluetooth. Here are some apps name that can be used:


  * ### Bluetooth Spp pro
  * ### Bluetooth controller
### After installing the App, you need to open it and then search Bluetooth device and select HC-05 Bluetooth device. And then configure keys.

   * ### Here in this project we have used Bluetooth controller app.

* ### Download and install Bluetooth Controller.
* ### Turned ON mobile Bluetooth.
* ### Now open Bluetooth controller appPress scan
* ### Select desired Bluetooth device (Bluetooth Module HC-05).
* ### Now set keys by pressing set buttons on screen  
### To set keys we need to press ‘set button’ and set key according to picture given below:
![](https://circuitdigest.com/sites/default/files/inlineimages/Bluetooth-controller-app-for-home-automation.gif)
### After setting keys press ok.

* ### You can see in the above picture that there are 9 buttons in which first row is for fan controlling, second one is for light controlling and last one is for TV controlling.  Means First row’s ON and OFF buttons are used to ON and OFF the fan, second row’s buttons are for Light and third ones are for TV. We have used three bulbs of different colors instead of TV and fan, for demonstration purpose.


* ### Now, when we touch any button in Bluetooth controller app then Android phone sends a value to Bluetooth module, after receiving this value, Bluetooth module sends the received value to the microcontroller and then microcontroller reads it and compare it with predefined value. If any match is occurred then microcontroller performs relative operation. Same operation will performed each time when button pressed.

![](https://circuitdigest.com/sites/default/files/inlineimages/Bluetooth-Controlled-Home-Automation-Block-diagram.jpg)


* ### Now, when user touch ‘Fan On’ button in Bluetooth controller app then microcontroller receives ‘1’ via Bluetooth module and then controller Switch ‘On’ the Fan by using relay driver and relay. And when user touch ‘Fan Off’ button in Bluetooth controller app then microcontroller receives ‘2’ via Bluetooth module and then controller Switch ‘Off’ the Fan by using relay driver and relay.

* ### Likewise 3,4,5,6 numbers are sent by Android Phone, when Light On, Light Off, TV On, TV Off button has been touched respectively:

