/*
 * Copyright (C) 2019 GreenWaves Technologies
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __BSP_GAPOC_B_H__
#define __BSP_GAPOC_B_H__

#define CONFIG_HYPERFLASH
#define CONFIG_ILI9341
#define CONFIG_HYPERRAM
#define CONFIG_NINA_B112
#define CONFIG_SPIRAM
#define CONFIG_SPIFLASH

#define CONFIG_ILI9341_SPI_ITF         ( 1 )
#define CONFIG_ILI9341_SPI_CS          ( 0 )
#define CONFIG_ILI9341_GPIO            ( 0 )
#define CONFIG_ILI9341_GPIO_PAD        ( PI_PAD_12_A3_RF_PACTRL0 )
#define CONFIG_ILI9341_GPIO_PAD_FUNC   ( PI_PAD_12_A3_GPIO_A0_FUNC1 )

#define CONFIG_HYPERFLASH_HYPER_ITF    ( 0 )
#define CONFIG_HYPERFLASH_HYPER_CS     ( 1 )

#define CONFIG_HYPERRAM_HYPER_ITF      ( 0 )
#define CONFIG_HYPERRAM_HYPER_CS       ( 0 )
#define CONFIG_HYPERRAM_START          ( 0 )
#define CONFIG_HYPERRAM_SIZE           ( 8 << 20 )

#define CONFIG_SPIRAM_SPI_ITF   0
#define CONFIG_SPIRAM_SPI_CS    1
#define CONFIG_SPIRAM_START     0
#define CONFIG_SPIRAM_SIZE     (1<<20)

#define CONFIG_SPIFLASH_SPI_ITF     0
#define CONFIG_SPIFLASH_SPI_CS      0
#define CONFIG_SPIFLASH_START       0
#define CONFIG_SPIFLASH_SIZE        (1<<24)
#define CONFIG_SPIFLASH_SECTOR_SIZE (1<<12)

#define CONFIG_HYPERBUS_DATA6_PAD      ( PI_PAD_46_B7_SPIM0_SCK )
// This is due to a HW bug, to be fixed in the future
#define CONFIG_UART_RX_PAD_FUNC        ( 0 )
#define CONFIG_HYPERRAM_DATA6_PAD_FUNC ( 3 )

#define CONFIG_NINA_B112_UART_ID       ( 0 )

#define GPIO_1V8_EN                    ( PI_GPIO_A4_PAD_16_A44 )
#define GPIOA0_LED                     ( PI_GPIO_A1_PAD_13_B2 )
#define GPIO_USER_LED                  ( PI_GPIO_A1_PAD_13_B2 )
/* BLE Nina. */
#define GPIO_NINA17_DSR                ( PI_GPIO_A21_PAD_35_B13 )
#define GPIO_NINA_PWRON                ( PI_GPIO_A2_PAD_14_A2 )

#endif  /* __BSP_GAPOC_B_H__ */
