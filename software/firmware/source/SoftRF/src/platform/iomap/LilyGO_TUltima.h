
/* Peripherals */
#define SOC_GPIO_PIN_CONS_TULTIMA_RX    SOC_UNUSED_PIN
#define SOC_GPIO_PIN_CONS_TULTIMA_TX    SOC_UNUSED_PIN

#define SOC_GPIO_PIN_GNSS_TULTIMA_RX    _PINNUM(1, 7) // P1.07
#define SOC_GPIO_PIN_GNSS_TULTIMA_TX    _PINNUM(1, 5) // P1.05

#define SOC_GPIO_PIN_GNSS_TULTIMA_PPS   _PINNUM(1, 6) // P1.06
#define SOC_GPIO_PIN_GNSS_TULTIMA_IRQ   _PINNUM(1, 4) // P1.04
#define SOC_GPIO_PIN_GNSS_TULTIMA_RST   SOC_UNUSED_PIN

/* SPI */
#define SOC_GPIO_PIN_TULTIMA_MOSI       _PINNUM(0, 27) // P0.27
#define SOC_GPIO_PIN_TULTIMA_MISO       _PINNUM(1, 14) // P0.14
#define SOC_GPIO_PIN_TULTIMA_SCK        _PINNUM(0,  3) // P0.03
#define SOC_GPIO_PIN_TULTIMA_SS         _PINNUM(0, 23) // P0.23

/* LR1121, SX1262, SX1276 or SX1280 */
#define SOC_GPIO_PIN_TULTIMA_RST        _PINNUM(0, 25) // P0.25
#define SOC_GPIO_PIN_TULTIMA_DIO1       _PINNUM(0, 15) // P0.15
#define SOC_GPIO_PIN_TULTIMA_BUSY       _PINNUM(0, 17) // P0.17
#define SOC_GPIO_PIN_TULTIMA_EN         _PINNUM(0, 13) // P0.13

/* I2C */
#define SOC_GPIO_PIN_TULTIMA_SDA        _PINNUM(1,  1) // P1.01
#define SOC_GPIO_PIN_TULTIMA_SCL        _PINNUM(1,  3) // P1.03

/* buttons */
#define SOC_GPIO_PIN_TULTIMA_BUTTON1    _PINNUM(0, 10) // P0.10
#define SOC_GPIO_PIN_TULTIMA_BUTTON2    _PINNUM(1, 12) // P1.12

/* E-paper */
#define SOC_GPIO_PIN_EPD_TULTIMA_MISO   _PINNUM(0, 14) // P0.14
#define SOC_GPIO_PIN_EPD_TULTIMA_MOSI   _PINNUM(0, 26) // P0.26
#define SOC_GPIO_PIN_EPD_TULTIMA_SCK    _PINNUM(0,  4) // P0.04
#define SOC_GPIO_PIN_EPD_TULTIMA_SS     _PINNUM(0, 11) // P0.11
#define SOC_GPIO_PIN_EPD_TULTIMA_DC     _PINNUM(0,  7) // P0.07
#define SOC_GPIO_PIN_EPD_TULTIMA_RST    _PINNUM(1,  8) // P1.08
#define SOC_GPIO_PIN_EPD_TULTIMA_BUSY   _PINNUM(0,  5) // P0.05
#define SOC_GPIO_PIN_EPD_TULTIMA_BLGT   _PINNUM(1, 11) // P1.11

/* W25Q128JVPIQ SPI flash */
#define SOC_GPIO_PIN_SFL_TULTIMA_MOSI   _PINNUM(1, 10) // P1.10
#define SOC_GPIO_PIN_SFL_TULTIMA_MISO   _PINNUM(0, 29) // P0.29
#define SOC_GPIO_PIN_SFL_TULTIMA_SCK    _PINNUM(1, 13) // P1.13
#define SOC_GPIO_PIN_SFL_TULTIMA_SS     _PINNUM(0,  2) // P0.02
#define SOC_GPIO_PIN_SFL_TULTIMA_HOLD   _PINNUM(1, 15) // P1.15
#define SOC_GPIO_PIN_SFL_TULTIMA_WP     _PINNUM(0, 31) // P0.31

/* RTC */
#define SOC_GPIO_PIN_RTC_TULTIMA_INT    _PINNUM(1,  2) // P1.02

/* I2S */
#define SOC_GPIO_PIN_I2S_TULTIMA_LRCK   _PINNUM(1,  0) // P1.00
#define SOC_GPIO_PIN_I2S_TULTIMA_BCK    _PINNUM(0, 24) // P0.24
#define SOC_GPIO_PIN_I2S_TULTIMA_DOUT   _PINNUM(0, 22) // P0.22
#define SOC_GPIO_PIN_I2S_TULTIMA_MCK    SOC_UNUSED_PIN

/* IMU */
#define SOC_GPIO_PIN_IMU_TULTIMA_SS     _PINNUM(0, 28) // P0.28
#define SOC_GPIO_PIN_IMU_TULTIMA_INT    _PINNUM(0, 30) // P0.30
#define SOC_GPIO_PIN_IMU_TULTIMA_HB     _PINNUM(1, 12) // P1.12 /* TBD */
#define SOC_GPIO_PIN_IMU_TULTIMA_RST    SOC_UNUSED_PIN

/* FT6336U */
#define SOC_GPIO_PIN_TOUCH_TULTIMA_RST  _PINNUM(0,  8) // P0.08
#define SOC_GPIO_PIN_TOUCH_TULTIMA_INT  _PINNUM(0,  6) // P0.06

/*  DRV2605 */
#define SOC_GPIO_PIN_MOTOR_TULTIMA_EN   _PINNUM(1,  9) // P1.09
