/*
 * main.c
 *
 *  Created on: Mar 29, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include <stdlib.h>

#define arr_size 6

int main(void)
{
	printf("\nEnter 6 characters of your choice: \t");

	char arr[arr_size] = {};

	for(int i=0 ; i < arr_size ; i++) {
	    scanf(" %c", &arr[i]);
	}

	printf("\nASCII representation: ");
	for(int i = 0; i < arr_size; i++)
	{
		printf(" %d ", arr[i]);
	}
	return 0;
}

