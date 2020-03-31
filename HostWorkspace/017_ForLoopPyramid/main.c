/*
 * main.c
 *
 *  Created on: Mar 31, 2020
 *      Author: nemus
 */
#include <stdio.h>


int main(void)
{
	for(int i = 1; i <= 10; i++)
	{
		printf("\n");
		for(int j = 10; j > 0; j--)
		{
			if(i >= j)
			{
				printf("%d ",j);
			}


		}
	}

	return 0;
}
