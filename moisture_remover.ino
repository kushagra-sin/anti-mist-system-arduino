// Arduino UNO Code

#include <DHT.h>

#define DHTPIN_IN 2    // Pin for inside sensor
#define DHTPIN_OUT 3   // Pin for outside sensor
#define RELAY_PIN 4    // Relay control pin
#define DHTTYPE DHT11  // Define the DHT sensor type

DHT dhtIn(DHTPIN_IN, DHTTYPE);
DHT dhtOut(DHTPIN_OUT, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dhtIn.begin();
    dhtOut.begin();
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW); // Ensure fans are off initially
}

void loop() {
    // Read inside temperature and humidity
    float tempIn = dhtIn.readTemperature();
    float humIn = dhtIn.readHumidity();

    // Read outside temperature and humidity
    float tempOut = dhtOut.readTemperature();
    float humOut = dhtOut.readHumidity();

    // Check if readings are valid
    if (isnan(tempIn) || isnan(humIn) || isnan(tempOut) || isnan(humOut)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
    }

    // Print readings to Serial Monitor
    Serial.print("Inside Temp: "); Serial.print(tempIn); Serial.print("°C, ");
    Serial.print("Inside Humidity: "); Serial.print(humIn); Serial.println("%");
    Serial.print("Outside Temp: "); Serial.print(tempOut); Serial.print("°C, ");
    Serial.print("Outside Humidity: "); Serial.print(humOut); Serial.println("%");

    // Check if conditions for turning on the fans are met
    if (abs(humIn - humOut) >= 5 || abs(tempIn - tempOut) >= 3) {
        digitalWrite(RELAY_PIN, HIGH); // Turn on fans
        Serial.println("Fans ON");
    } else {
        digitalWrite(RELAY_PIN, LOW); // Turn off fans
        Serial.println("Fans OFF");
    }

    delay(2000); // Wait 2 seconds before next reading
}
