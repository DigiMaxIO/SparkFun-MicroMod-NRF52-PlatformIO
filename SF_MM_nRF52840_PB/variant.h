 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_SPARKFUN52840MICROMOD_
#define _VARIANT_SPARKFUN52840MICROMOD_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (64)
#define NUM_DIGITAL_PINS     (64)
#define NUM_ANALOG_INPUTS    (8)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (13)
#define LED_BUILTIN          PIN_LED1
#define LED_BLUE             PIN_LED1

#define LED_STATE_ON         1         // State when LED is lit

/*
 * Analog pins
 */
#define PIN_A0               (4)
#define PIN_A1               (5)
#define PIN_A2               (29)
#define PIN_A3               (28)
#define PIN_A4               (30)
#define PIN_A5               (31)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;

#define PIN_PWM0 (6u)
#define PIN_PWM1 (16u)
static const uint8_t PWM0 = PIN_PWM0;
static const uint8_t PWM1 = PIN_PWM1;
#define PIN_BATTVIN3 (30u)
static const uint8_t BATTVIN3 = PIN_BATTVIN3;

#define ADC_RESOLUTION    14

/*
 * Serial interfaces
 */
// Serial
//Previous Hardware UART definition for nRF52 Arduino Core, below 0.16.0
//Feel free to comment out these two lines below if there are conflicts with latest release
#define PIN_SERIAL_RX       (42)//(15)
#define PIN_SERIAL_TX       (35)//(17)

//Hardware UART definition for nRF52 Arduino Core, 0.17.0 and above
#define PIN_SERIAL1_RX      PIN_SERIAL_RX
#define PIN_SERIAL1_TX      PIN_SERIAL_TX

#define PIN_SERIAL_RX1      PIN_SERIAL_RX
#define PIN_SERIAL_TX1      PIN_SERIAL_TX

//For serial flow control, uncomment lines 189 and 190
#define PIN_SERIAL_RTS1     (34)
#define PIN_SERIAL_CTS1     (41)

#define PIN_SERIAL2_RX      (37)
#define PIN_SERIAL2_TX      (39)

#define PIN_SERIAL_RX2 PIN_SERIAL2_RX
#define PIN_SERIAL_TX2 PIN_SERIAL2_TX

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 2

#define PIN_SPI_MISO         (2)//(31)
#define PIN_SPI_MOSI         (31)//(3)
#define PIN_SPI_SCK          (28)//(30)
#define PIN_SPI_SS           (20)//(2)

static const uint8_t SS   = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI_MISO1       (21)
#define PIN_SPI_MOSI1       (14)
#define PIN_SPI_SCK1        (19)
#define PIN_SPI_SS1         (32)

#define PIN_SPI1_MISO       PIN_SPI_MISO1
#define PIN_SPI1_MOSI       PIN_SPI_MOSI1
#define PIN_SPI1_SCK        PIN_SPI_SCK1
#define PIN_SPI1_SS         PIN_SPI_SS1

static const uint8_t SS1 = PIN_SPI_SS1;
static const uint8_t MOSI1 = PIN_SPI_MOSI1;
static const uint8_t MISO1 = PIN_SPI_MISO1;
static const uint8_t SCK1 = PIN_SPI_SCK1;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 2

#define PIN_WIRE_SDA         (8)
#define PIN_WIRE_SCL         (11)
#define PIN_WIRE_INT         (15)

#define PIN_WIRE_SDA1        (33)
#define PIN_WIRE_SCL1        (24)

#define PIN_WIRE1_SDA        PIN_WIRE_SDA1
#define PIN_WIRE1_SCL        PIN_WIRE_SCL1

/*
 * QSPI interface for external flash
 */
#define PIN_QSPI_SCK         19
#define PIN_QSPI_CS          14
#define PIN_QSPI_DATA0       21
#define PIN_QSPI_DATA1       22
#define PIN_QSPI_DATA2       23
#define PIN_QSPI_DATA3       32

// PDM Interfaces
// ---------------
#define PIN_PDM_PWR (46)
#define PIN_PDM_CLK (25)
#define PIN_PDM_DIN (26)


// On-board QSPI Flash
// If EXTERNAL_FLASH_DEVICES is not defined, all supported devices will be used
#define EXTERNAL_FLASH_DEVICES   GD25Q16C

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif