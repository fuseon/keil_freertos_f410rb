#include "includes.h"

void tick_pin_toggle()
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
}

void led_on()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, (GPIO_PinState)1);
}

void led_off()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, (GPIO_PinState)0);
}

void led_toggle()
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}
