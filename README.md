# ESP-IDF LovyanGFX

## Description

ESP-IDF에서 LovyanGFX 라이브러리 테스트  
ESP-IDF v5.0.2에서 테스트 진행  
ESP-IDF v5.1에서 테스트 진행  

## Commit

2023.07.05 - gif img 테스트 (duck 192 x 240)  
2023.11.24 - extern "C" 변경 후 CMakeLists 수정  

## Test Spec

```text
ESP-IDF : v5.0.2
ESP-IDF : v5.1
Chip : ESP32-WROOM-32
TFT LCD : ST7789
```  

## External Library

Library : [LovyanGFX](https://github.com/lovyan03/LovyanGFX)  

## Setting

```text
/*
 * Adafruit 1.3" 240x240 ST7789 Wide Angle TFT LCD display
 * Driver : ST7789
 * Resolution : 240 x 240
 * MISO : NC
 * MOSI : 19
 * SCLK : 18
 * TFT_CS : 21
 * TFT_DC : 23
 * TFT_RST : 22
 * TFT_Lite : NC
*/
```  

[Dev91 Blog](https://dev91.tistory.com/)
