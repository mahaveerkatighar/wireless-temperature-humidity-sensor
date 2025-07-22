#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <VirtualWire.h>

// Initialize the LCD at I2C address 0x27 for a 16x2 display
LiquidCrystal_I2C lcd(0x27, 16, 2);

char receivedMsg[20];

void setup() {
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Sensor Monitor"); // Generic Header

  // Initialize VirtualWire
  vw_setup(2000);        // Bits per sec
  vw_set_rx_pin(11);      // Set the Rx pin
  vw_rx_start();          // Start the receiver
}

void loop() {
  uint8_t buf[VW_MAX_MESSAGE_LEN];
  uint8_t buflen = VW_MAX_MESSAGE_LEN;

  // Check if a message has been received
  if (vw_get_message(buf, &buflen)) {
    
    // Clear the second line before printing new data
    lcd.setCursor(0, 1);
    lcd.print("                ");

    // Copy buffer to a string
    memcpy(receivedMsg, buf, buflen);
    receivedMsg[buflen] = '\0';

    // Print the received message on the LCD
    lcd.setCursor(0, 1);
    lcd.print(receivedMsg);
    
    Serial.print("Received: ");
    Serial.println(receivedMsg);
  }
}
