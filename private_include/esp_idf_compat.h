#ifndef ESP_IDF_COMPAT_H
#define ESP_IDF_COMPAT_H

#if __has_include("esp_idf_version.h")
#include "esp_idf_version.h"
#endif

#ifdef ESP_IDF_VERSION

#if ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(5, 0, 0) && ESP_IDF_VERSION < ESP_IDF_VERSION_VAL(6, 0, 0)
#include <esp_random.h>
#include <spi_flash_mmap.h>
#elif ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(4, 0, 0) && ESP_IDF_VERSION < ESP_IDF_VERSION_VAL(5, 0, 0)
#include <esp_spi_flash.h>
#endif

#endif /* ESP_IDF_VERSION */
#endif /* ESP_IDF_COMPAT_H */
