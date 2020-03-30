/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 */
#include <stdio.h>

#define BIT_MASK 0b01110000

int main(void)
{
	int num = 0;

	printf("\nEnter one number to set it's 4th and 7th bit: \t");
	scanf(" %d", &num);

	num &= ~(BIT_MASK);
	printf("\nNew number value is %d",num);

	return 0;
}

