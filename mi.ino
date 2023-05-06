# include "DHT.h"

# define DHTPIN 4     
# define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    Serial.begin(115200);
    Serial.println(F("DHTxx test!"));
    dht.begin();
}

void loop()
{
// Wait a few seconds between the measurements.
    delay(2000);
// Reading temperature or humidity takes about 250 milliseconds!

float h = dht.readHumidity();
// Read temperature as Celsius(the default)
float t = dht.readTemperature();
// Read temperature as Fahrenheit(isFahrenheit=true)
float f = dht.readTemperature(true);

// Check if any reads failed and exit early(to try again).
if (isnan(h) | | isnan(t) | | isnan(f)) {
   Serial.println(F("Failed to read from DHT sensor!"));
   return;
}


 Serial.print(F("Humidity: "));
 Serial.print(h);
 Serial.print(F("%  Temperature: "));
 Serial.print(t);
 Serial.print(F("°C "));
 Serial.print(f);
 Serial.print(("°F "));
 Serial.println();
}
