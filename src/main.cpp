// Basically importing wifi module
#include <WiFi.h>

// Replace with your network credentials
const char* ssid     = "Sypder Net"; // This variable tells the SSID ( Name of the wifi connection)
const char* password = "123456789"; // This str is the password that will be used in this program

WiFiServer server(80); // just to setup the server but aint nobody gonna use webinterface anyways


void setup() {
  
  WiFi.softAP(ssid, password);
  //This above statement initializes the WIFI 
  IPAddress IP = WiFi.softAPIP();
  // It's an IPAddress Enum var which can be used to print router IP but with my 
  // Observation the default ip Right now is (192.168.4.2) // it's dynamic tho
  
}

void loop(){
  WiFiClient client = server.available(); // This client var checks is 1 wifi connection is connected or not..
  while (client.connected()){
    // basic loop where everything happens
  }

}