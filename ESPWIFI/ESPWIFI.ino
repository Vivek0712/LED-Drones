#include <ESP8266WiFi.h>

const char* ssid = "SRM-Event";
const char* password = "SRMist#1111";
bool sentText=false;
long timer1=millis();
int interval=10000;
String answer;

WiFiServer server(80);


void setup(void)
{  
  Serial.begin(115200);
  
  // Connect to WiFi network
  WiFi.begin(ssid, password);

  Serial.println("STARTING WIFI");
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
  }
  Serial.println("CONNECTED");
  delay(500);    
  // Start TCP (HTTP) server
  server.begin();  
  Serial.println(WiFi.localIP());
}

