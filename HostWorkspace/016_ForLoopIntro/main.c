/*
 * main.c
 *
 *  Created on: Mar 31, 2020
 *      Author: nemus
 */
#include <stdio.h>


int main(void)
{

	int start = 0;
	int end = 0;
	int even_counter = 0;

	printf("\nPlease enter start number: ");
	scanf(" %d", &start);

	printf("\nPlease enter end number: ");
	scanf(" %d", &end);

	printf("\nEven numbers in range from %d to %d:", start, end);

	if(start < end)
	{
		for(; start <= end; start++)
		{
			if(start % 2 == 0)
			{
				printf("\n %d", start);
				even_counter++;
			}
		}
	}
	else if(start > end)
	{
		for(; start >= end; start--)
		{
			if(start % 2 == 0)
			{
				printf("\n %d", start);
				even_counter++;
			}
		}
	}
	else
	{
		printf("\nStart and End have same value! Please try again!");
	}

	printf("\nThere is %d even numbers printed!", even_counter);

	return 0;
}

