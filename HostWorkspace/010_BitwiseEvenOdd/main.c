/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 */
#include <stdio.h>

#define BIT_MASK 0b00000001

int main(void)
{
	int num = 0;

	printf("\nEnter one number to check if it's EVEN or ODD\t");
	scanf(" %d", &num);

	if(BIT_MASK & num)
	{
		printf("\nNumber %d is ODD", num);
	}
	else
	{
		printf("\nNumber %d is EVEN", num);
	}

	return 0;
}

