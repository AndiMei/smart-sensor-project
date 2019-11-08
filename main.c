/*
 * main.c
 *
 *  Created on: Sep 13, 2019
 *      Author: Andi
 */


#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
//#include "mySPI/mySPI.h"
//#include "myADC/myADC.h"
//#include "myUART/myUART.h"

char buff[100];
int i=0;

int main(void){
//	ADC_Init();
	DDRA =0xFF;
//	SPI_MasterInit();
//	USART_Init();
	while(1){

//		buff[i] = SPI_MasterTransmit(0x01);
//		USART_PutChar(buff[i]);
//		if(buff[i] == '\0'){
//			USART_PutStr("\n");
//			i=0;
//		}
//		i++;
//
//		_delay_ms(1);
	}
}
