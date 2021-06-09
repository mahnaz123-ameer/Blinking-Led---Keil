#include "stm32f446xx.h"

int main(){
	RCC->AHB1ENR |= 0x1;
	//GPIOA->MODER |= 1<<10; //value << position
	GPIOA->MODER |= 0x400;
	while(1){
		GPIOA->BSRR |= 0x20;
		for(int i=0; i<1000000; i++);
		GPIOA->BSRR |= 0x200000;
		for(int i=0; i<1000000; i++);
	}
}
