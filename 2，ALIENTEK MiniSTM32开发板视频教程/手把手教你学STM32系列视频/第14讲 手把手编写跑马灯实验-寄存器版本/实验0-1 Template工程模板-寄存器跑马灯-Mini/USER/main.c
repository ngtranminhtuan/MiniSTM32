#include "stm32f10x.h"
#include "delay.h"
#include "led.h"

int main(void)
{

delay_init();
LED_Init();

	while(1){
		
		GPIOA->ODR|=1<<8;
		GPIOD->ODR|=1<<2;
		delay_ms(500);
		
		GPIOA->ODR&=~(1<<8);
		
	  GPIOD->ODR&=~(1<<2);
		delay_ms(500);
	}
}

