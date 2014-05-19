#include "DS18B20.h"
#include "OneWire.h"

DS18B20 ds18b20 = DS18B20(D2);
char szInfo[64];

 
void setup() {
    Serial1.begin(9600);
}
 
void loop() {
    if(!ds18b20.search()){
        Serial1.println("No more addresses.");
        Serial1.println();
        ds18b20.resetsearch();
        delay(250);
        
        return;       
    }
    
    float celsius = ds18b20.getTemperature();
    float fahrenheit = ds18b20.convertToFahrenheit(celsius);
  
    sprintf(szInfo, "Temperature: %2.2f Celsius, %2.2f Fahrenheit (Chip Name: %s)", celsius, fahrenheit, ds18b20.getChipName());
  
    Spark.publish("tmpinfo", szInfo);
  
    delay(1000);
}