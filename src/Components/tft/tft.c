#include <stdio.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>   
#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST   8   // or -1 if tied to reset

Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_RST);


void tft_init(void)
{
    printf("TFT init...\n");
   
  tft.begin();
  
}




void tft_clear_screen(void)
{
    printf("Clearing screen...\n");
    tft.fillScreen(ILI9341_BLACK);
}

void tft_draw_test_pattern(void)
{
    tft.setCursor(10, 20);
    tft.setTextColor(ILI9341_WHITE);
    tft.setTextSize(2);
    tft.print("Hello, world!");

    printf("Drawing test pattern...\n");


}

