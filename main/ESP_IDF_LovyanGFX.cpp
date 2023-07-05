#include <LGFX_ST7789.hpp>

#include "duck.h"
#define DUCK_IMG

static const char *TAG = "TFT";

static LGFX lcd;

extern "C" void app_main(void)
{
    lcd.init();
    lcd.setRotation(3);

    lcd.setSwapBytes(true);
    lcd.fillScreen(TFT_BLACK);

    // center x y
    int img_x = (lcd.width() - animation_width) / 2;
    int img_y = (lcd.height() - animation_height) / 2;

    int frame_delay = 20;

    while(1) {
        for(int i = 0; i < frames; i++)
        {
            vTaskDelay(frame_delay / portTICK_PERIOD_MS);
            lcd.pushImage(img_x, img_y, animation_width, animation_height, ani_img[i]);
        }
    }
}
