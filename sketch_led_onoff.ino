#include <Blynk.h>
 

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[]="trg2Tdm9vZbT0BP3wyENOGnMye0Ot6JC";//Auth. token:
char ssid[]="kt_G1GA_5G_67C1"; //wifi name:
char pass[]="0kb72xd760"; // wifi password:

int LEDpin= 22;
void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(LEDpin,OUTPUT);
  pinMode(LEDpin, LOW);
}
void loop(){
  Blynk.run();
}
