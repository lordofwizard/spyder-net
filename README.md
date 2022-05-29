# Spyder-Net
___
Spyder net is a _[Asynchronous](https://en.wikipedia.org/wiki/Asynchrony_(computer_programming))_ network connection providing device which can make **WiFi** 2.4 Ghz Connections.

### TO-DO-List 
note this list will be archived after the complition of the project.
* [X] Purchasing required [components](#components) for the project.
* [X] Initializing the github repository for [spyder-net](https://github.com/lordofwizard/spyder-net.git)
* [X] Learning basics of EPS-32 device and reading it's documentation throughly
* [X] Creation of a hotspot WAP (WiFi access point) with ESP-32.
* [X] Monitoring device connection and temprature managment of the device.
* [ ] Learning how to make asynchronous WiFi connections with async.h
* [ ] Writing own library of functions to make async wifi connections.
* [ ] Writing functionality to check the Number of Devices in a selected area
* [ ] Making async wifi connections based on the Privious NO.
* [ ] Learning the [GPIO](https://en.wikipedia.org/wiki/General-purpose_input/output) layout of EPS-32
* [ ] Testing LED's on BreadBoard
* [ ] Writing functinality for LED's based on the status of program
* [ ] Final testing on BreadBoard
* [ ] Assembly with soldering of the product
* [ ] Publishing this shit.

### Components
* EPS-32 
* Jumper Wires
* Laptop running (GNU/Linux) + wifi card of 2.4 Ghz
* LED's
* Soldering and circuit wiring common components

### How this device functions
* ESP-32 Wifi Module checks for Number of devices that needs wifi in area
* Users will connect to a Basic node of the Room 
* Async connections will be created
* Users will be shifted to accomodate the bandwidth according to the need of users

### Why this device is better than traditional multiconnection approach
1. ESP-32 costs less than 700 INR
2. Router costs 2000 INR +
3. Even if you have bandwidth of 1Gbps + you still can't give it to beyond MAX no of the devices router can handle at once.
4. There is only 1 node for wifi with same SSID.
5. If one node is OUT the whole connection is down.
6. Cheap Routers does not have QUIS functionality and doesn't have Per User Bandwidth control capabilities.

### Contributors
* Advait Pandharpurkar (Leader)
* Asrarooj Ansari (Deputy)
* Himanshu Shrivastava
* Indrawadhan Yelwande
* Supriya Kumari
* Deepika Patil

