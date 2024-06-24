#define USE_RF95 // RFM95/SX127x
// For OLED LCD
#define I2C_SDA 6
#define I2C_SCL 7

// GPS
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN 20
#define GPS_TX_PIN 21
#define GPS_UBLOX // figure out which one i need

// #define PIN_BUZZER 25

#define BUTTON_PIN 8
#define BUTTON_NEED_PULLUP
// #define EXT_NOTIFY_OUT 12 // Overridden default pin to use for Ext Notify Module (#975).

#define LORA_DIO0 10 // a No connect on the SX1262/SX1268 module
#define LORA_RESET 5 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 8  // IRQ for SX1262/SX1268
#define LORA_DIO2    // BUSY for SX1262/SX1268
#define LORA_DIO3    // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

// In transmitting, set TXEN as high communication level，RXEN pin is low level;
// In receiving, set RXEN as high communication level, TXEN is lowlevel;
// Before powering off, set TXEN、RXEN as low level.
// #define LORA_RXEN 20 // Input - RF switch RX control, connecting external MCU IO, valid in high level n
// #define LORA_TXEN 21 // Input - RF switch TX control, connecting external MCU IO or DIO2, valid in high level n

// BATTERY *****************************************

#define BATTERY_PIN 4
#define ADC_CHANNEL ADC1_GPIO4_CHANNEL
#define BATTERY_SENSE_SAMPLES 30

// ratio of voltage divider = 2.0 (R42=100k, R43=100k)
#define ADC_MULTIPLIER 2
//

// lora pins

#undef LORA_SCK
#define LORA_SCK 0
#undef LORA_MISO
#define LORA_MISO 1
#undef LORA_MOSI
#define LORA_MOSI 2
#undef LORA_CS
#define LORA_CS 3

// RX/TX for RFM95/SX127x
// #define RF95_RXEN LORA_RXEN //n
// #define RF95_TXEN LORA_TXEN //n
// #define RF95_TCXO <GPIO#>

/***NOT-REQ***
 GPIO 6, LORA_DIO1
 GPIO 7, LORA_DIO2
*************/

/***REQ***
LORA_SCK 0
LORA_MISO 1
LORA_MOSI 2
LORA_CS 3
GPIO 5, LORA_RESET
GPIO 4, LORA_DIO0
*********/

/*
LORA_SCK 0
LORA_MISO 1
LORA_MOSI 2
LORA_CS 3
BATTERY_PIN 4
LORA_RESET 5
I2C_SDA 6
I2C_SCL 7
LORA_DIO1 8
BUTTON_PIN 8
LORA_DIO0 4
GPS_RX_PIN 20
GPS_TX_PIN 21
 */