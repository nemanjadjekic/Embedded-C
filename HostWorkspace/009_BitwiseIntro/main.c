/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 */
#include <stdio.h>


int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("Enter first number: ");
	scanf(" %d", &num1);

	printf("\nEnter second number: ");
	scanf(" %d", &num2);

	printf("\nBitwise & operation: %d", num1 & num2);
	printf("\nBitwise | operation: %d", num1 | num2);
	printf("\nBitwise ^ operation: %d", num1 ^ num2);
	printf("\nBitwise ~ operation: %d", ~num1);

	return 0;
}

