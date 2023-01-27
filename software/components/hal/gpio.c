#include "gpio.h"

void set_gpio_direction(int gpio, int direction)
{
    gpio_reset_pin(gpio);
    gpio_set_direction(gpio, GPIO_MODE_OUTPUT);
}

void set_gpio(int gpio, int state)
{
    gpio_set_level(gpio, state);
}

void set_gpio_high(int gpio)
{
    gpio_set_level(gpio, GPIO_HIGH);
}

void set_gpio_low(int gpio)
{
    gpio_set_level(gpio, GPIO_LOW);

}