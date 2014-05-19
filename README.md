Spark Core and Dallas DS18B20 Temperature Sensor
------------------------------------------------

Sample application using Spark Core and Dallas [DS18B20 Digital Temperature Sensor][1]. The **OneWire** source code is taken from [this link][2] by [@tidwelltimj][3]. I just separated this into two classes *OneWire* and *DS18B20*. The sample code publish a variable named ***tmpinfo*** with temperature value.

**Wiring**
Power to 3.3/5V
GND to GND
Signal to D2 (with pullup resistor)


  [1]: https://www.sparkfun.com/products/245
  [2]: http://pastebin.com/iYcDkrLw
  [3]: https://community.spark.io/users/tidwelltimj/activity