#include <stdio.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "tft/tft.h"

void app_main(void)
{
    tft_init();
    tft_clear_screen();
    tft_draw_test_pattern();
}
