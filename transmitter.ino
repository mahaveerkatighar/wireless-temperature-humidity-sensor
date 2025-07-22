#include <DHT.h>
#include <VirtualWire.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
char msg[20];

void setup() {
  Serial.begin(9600);
  dht.begin();
  vw_setup(2000);      // Bits per sec
  vw_set_tx_pin(12);   // Set the Tx pin
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  // Format the message string
  sprintf(msg, "T:%d H:%d", (int)temperature, (int)humidity);

  // Send the message
  vw_send((uint8_t *)msg, strlen(msg));
  vw_wait_tx(); // Wait for transmission to complete
  
  Serial.print("Sent: ");
  Serial.println(msg);
  
  delay(2000);
}
