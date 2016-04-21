#include <Wire.h>
#include "MAdafruit_ADS1015.h"

// Air Quality Code


int current_quality = -1;
Adafruit_ADS1115 ads;

#include "AirQualityLibrary.h"

void setup()
{
  Serial.begin(115200);
  Wire.begin();
  //Wire.begin();
  //TCA9545.TCA9545SetConfig();
  //TCA9545.write_control_register(TCA9545_CONFIG_BUS3);

  Serial.println("------------------------------");
  Serial.println("------------------------------");

  Serial.println("OurWeather - Air Quality Sensor Test");

  Serial.println("------------------------------");
  Serial.println("------------------------------");
  Serial.println();


  ads.begin();


  
  Serial.println("Completed Setup");
}

long currentAirQuality;

void loop()
{
  //Serial.println();
  //Serial.println("-----Sampling Air Quality-----");


  int16_t ad0 = ads.readADC_SingleEnded(0);
 

  Serial.print("ad0=");
  Serial.println(ad0);

  

  currentAirQuality = getAirQuality();



  Serial.print("currentAirQuality=");
  Serial.println(currentAirQuality);
  Serial.println("------------------------------");
  delay(1000);


}



