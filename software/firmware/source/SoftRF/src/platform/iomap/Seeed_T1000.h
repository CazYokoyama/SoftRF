
/* Peripherals */
#define SOC_GPIO_PIN_CONS_T1000_RX    _PINNUM(0, 17) // P0.17
#define SOC_GPIO_PIN_CONS_T1000_TX    _PINNUM(0, 16) // P0.16

#define SOC_GPIO_PIN_GNSS_T1000_RX    _PINNUM(0, 14) // P0.14
#define SOC_GPIO_PIN_GNSS_T1000_TX    _PINNUM(0, 13) // P0.13

#define SOC_GPIO_PIN_GNSS_T1000_PPS   SOC_UNUSED_PIN
#define SOC_GPIO_PIN_GNSS_T1000_IRQ   _PINNUM(1, 12) // P1.12
#define SOC_GPIO_PIN_GNSS_T1000_RST   _PINNUM(1, 15) // P1.15
#define SOC_GPIO_PIN_GNSS_T1000_EN    _PINNUM(1, 11) // P1.11

/* SPI */
#define SOC_GPIO_PIN_T1000_MOSI       _PINNUM(1,  9) // P1.09
#define SOC_GPIO_PIN_T1000_MISO       _PINNUM(1,  8) // P1.08
#define SOC_GPIO_PIN_T1000_SCK        _PINNUM(0, 11) // P0.11
#define SOC_GPIO_PIN_T1000_SS         _PINNUM(0, 12) // P0.12

/* LR1110 */
#define SOC_GPIO_PIN_T1000_RST        _PINNUM(1, 10) // P1.10
#define SOC_GPIO_PIN_T1000_DIO1       _PINNUM(1,  1) // P1.01
#define SOC_GPIO_PIN_T1000_BUSY       _PINNUM(0,  7) // P0.07

/* I2C */
#define SOC_GPIO_PIN_T1000_SDA        _PINNUM(0, 26) // P0.26
#define SOC_GPIO_PIN_T1000_SCL        _PINNUM(0, 27) // P0.27

/* button */
#define SOC_GPIO_PIN_T1000_BUTTON     _PINNUM(0,  6) // P0.06

/* LED */
#define SOC_GPIO_LED_T1000_GREEN      _PINNUM(0, 24) // P0.24

/* ADC */
#define SOC_GPIO_PIN_T1000_BATTERY    _PINNUM(0,  2) // P0.02

/* buzzer */
#define SOC_GPIO_PIN_T1000_BUZZER     _PINNUM(0, 25) // P0.25
#define SOC_GPIO_PIN_T1000_BUZZER_EN  _PINNUM(1,  5) // P1.05
