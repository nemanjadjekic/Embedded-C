/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 */
#include <stdio.h>


int main(void)
{
	char ch = 100;

	printf("\nValue of char: %d", ch);
	printf("\nAddress of char %p", &ch);

	char *ch_ptr = &ch;
	char new_ch = *ch_ptr;
	printf("\nValue of new_ptr: %d", new_ch);

	*ch_ptr = 65;
	printf("\nValue from ch_ptr: %d", new_ch);
	printf("\nValue of char: %d", ch);

	return 0;
}

