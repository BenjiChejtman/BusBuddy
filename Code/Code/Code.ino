//------archivos

#include <SPI.h>
#include <WiFi.h>
#include <ESP8266WiFi.h>


//------codigo: setup

int parada = 0;

WiFiServer server (80);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

//------codigo: bucle

void loop() {
  // put your main code here, to run repeatedly:
  while (parada >= 0)
  {
    if (parada == 0)
    {
      Serial.println("X");
    }
      
    if (parada == 1)
    {
       parada = analogRead(A0);
      Serial.println("¡Persona esperando en parada!");
      Serial.println(parada);
      delay(500);
    }
  }
}
