//------archivos
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <WiFi.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD = LiquidCrystal_I2C(0x27, 16, 2);

//------codigo: setup

int parada = 1;

void paradita() {
  if (parada == 0)
    {
      Serial.println("X");
      //LCD.setCursor(15, 1);
      LCD.clear(); // Borra pantalla.
      LCD.setCursor(0, 0); // Inicio del cursor
      LCD.print("Nadie en parada ");
    }
     
    if (parada == 1)
    {
      //parada = analogRead(A0);
      LCD.clear(); // Borra pantalla.
      LCD.setCursor(0, 0); // Inicio del cursor
      LCD.print("Persona esperan-");
      LCD.setCursor(0, 1); // Inicio del cursor
      LCD.print("do en parada");
      Serial.println("¡Persona esperando en parada!");
      Serial.println(parada);
      delay(500);
    }
}

WiFiServer server (80);
void setup() {
  // put your setup code here, to run once:
  LCD.init();      // Screen LCD                    
  LCD.backlight(); // Screen LCD
  Serial.begin(9600);
  paradita();
}

//------codigo: bucle

void loop() {
}

