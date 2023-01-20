#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"

#define INPUT GPIO_MODE_INPUT
#define OUTPUT GPIO_MODE_OUTPUT

#define GPIO_HIGH 1
#define GPIO_LOW 0

void set_gpio_direction(int gpio, int direction);
void set_gpio(int gpio, int state);
void set_gpio_high(int gpio);
void set_gpio_low(int gpio);
void toggle_gpio(int gpio);