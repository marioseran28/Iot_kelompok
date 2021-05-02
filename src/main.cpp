#include <Arduino.h>
#include <WiFi.h>

const char* WIFI_SSID = "RESTART";
const char* WIFI_PASS = "forundiknas";
const char* HOSTNAME = "labda";
void setup() {
   Serial.begin(115200);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  WiFi.setHostname(HOSTNAME);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
  }
  Serial.println("heloo labda");
  Serial.println("WiFi connected successfully.");

  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}