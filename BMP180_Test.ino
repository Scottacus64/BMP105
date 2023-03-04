#include <Wire.h>
#include <Adafruit_BMP085.h>

#define seaLevelPressure_hPa 1013.25


//////////////////////////////////////////
// IMU-repated items
//////////////////////////////////////////


Adafruit_BMP085 bmp;

  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  }
 
//  while (1) {}
  }

  
void loop() {


        Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *F");
        
    Serial.println();
    delay(1000);
}
