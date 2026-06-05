#pragma once

#include <cstdint>

namespace MemoryMap {

static constexpr uint32_t BOOT_ROM_BASE     = 0x00100000;
static constexpr uint32_t BOOT_ROM_SIZE     = 0x00001000;
static constexpr uint32_t SRAM_BASE         = 0x00102000;
static constexpr uint32_t SRAM_SIZE         = 0x00002000;
static constexpr uint32_t SPI_FLASH_BASE    = 0x20000000;
static constexpr uint32_t SPI_FLASH_SIZE    = 0x10000000;
static constexpr uint32_t UART_BASE         = 0x40000000;
static constexpr uint32_t GPIO_BASE         = 0x40000100;
static constexpr uint32_t RV_TIMER_BASE     = 0x40000200;
static constexpr uint32_t SPI_CONTROL_BASE  = 0x40000300;
static constexpr uint32_t I2C_BASE          = 0x40000400;
static constexpr uint32_t SPI_HOST_BASE     = 0x40000500;
static constexpr uint32_t PERIPHERAL_SIZE   = 0x00000100;

static constexpr uint32_t SRAM_LAST_WORD_ADDR = SRAM_BASE + SRAM_SIZE - 4;
static constexpr uint32_t SRAM_END_ADDR       = SRAM_BASE + SRAM_SIZE - 1;
static constexpr uint32_t AFTER_SRAM_ADDR     = SRAM_BASE + SRAM_SIZE;

} // namespace MemoryMap
