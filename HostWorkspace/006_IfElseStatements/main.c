/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 *
 *  Write a program which receives 2 numbers (integers)
 *  from the user and prints the biggest of two.
 *
 *  If n1 and n2 are equal print "Both numbers are equal"
 *
 */
#include <stdio.h>

int main(void)
{
	int first_num = 0;
	int second_num = 0;

	printf("Please enter first number: ");
	scanf(" %d", &first_num);

	printf("Please enter second number: ");
	scanf(" %d", &second_num);

	if(first_num == second_num)
	{
		printf("\nBoth numbers are equal!");
	}
	else
	{
		if(first_num > second_num)
			printf("\nNumber %d is bigger!", first_num);

		else
			printf("\nNumber %d is bigger!", second_num);
	}

	return 0;
}

