//                            USER DEFINED SETTINGS
//   Set driver type, fonts to be loaded, pins used and SPI control method etc

// Section 1. Driver type
// ##################################################################################

// Only define one driver
//#define ILI9341_DRIVER
//#define ST7735_DRIVER
#define ST7789_2_DRIVER    // Minimal configuration option

// Colour order
#define TFT_RGB_ORDER TFT_RGB  // Red-Green-Blue

// Section 2. Pins
// ##################################################################################

// DIY ESP32-S3 DevKitC-1 N16R8 handheld (ST7789 2.0" 240x320)
#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS   10
#define TFT_DC   15
#define TFT_RST  16
#define TFT_BL   7

// Section 3. Fonts
// ##################################################################################

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// Section 4. SPI frequency
// ##################################################################################

#define SPI_FREQUENCY  20000000
#define USE_HSPI_PORT
