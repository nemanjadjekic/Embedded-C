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

	printf("\nEven numbers in range 0 to 100:");

	while(i <= 100)
	{
		if(i % 2 == 0)
			printf("\n %d", i);
		i++;
	}

	return 0;
}

