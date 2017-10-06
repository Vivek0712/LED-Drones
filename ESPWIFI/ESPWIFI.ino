#include <ESP8266WiFi.h>

const char* ssid = "SRM-Event";
const char* password = "SRMist#1111";
bool sentText=false;
long timer1=millis();
int interval=10000;
String answer;

WiFiServer server(80);
