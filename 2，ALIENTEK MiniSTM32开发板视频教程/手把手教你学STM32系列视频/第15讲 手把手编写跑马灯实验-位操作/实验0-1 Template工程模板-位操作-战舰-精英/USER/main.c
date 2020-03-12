#include "stm32f10x.h"
#include "led.h"
#include "delay.h"

/************************************************
 ALIENTEK 战舰STM32F103开发板实验0
 工程模板
 注意，这是手册中的新建工程章节使用的main文件 
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

 
 int main(void)
 {	
 
	 delay_init();
	 
	 LED_Init();
	 
	 while(1){
	 
	  PBout(5)=1;
		PEout(5)=1;

	  delay_ms(500);
		 
	  PBout(5)=0;
		PEout(5)=0;
		 
		 delay_ms(500);
	 
	 
	 }
	 
 }
