/*
 * main.c
 *
 *  Created on: Mar 31, 2020
 *      Author: nemus
 */
#include <stdio.h>


int main(void)
{

	int i = 0;
	int even_counter = 0;

	printf("\nEven numbers in range 0 to 100:");

	while(i <= 100)
	{
		if(i % 2 == 0)
		{
			printf("\n %d", i);
			even_counter++;
		}
		i++;
	}

	printf("\nThere is %d even numbers printed!", even_counter);

	return 0;
}

