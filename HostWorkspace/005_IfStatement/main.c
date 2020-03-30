/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 *
 * Write a program that takes user's age and decides
 * whether a user can cast a vote or not.
 *
 * Minimum age for casting a vote is 18 years.
 *
 * Print appropriate message.
 *
 */
#include <stdio.h>

int main(void)
{
	int age = 0;

	printf("Please enter your age: ");
	scanf(" %d", &age);

	if(age < 18)
	{
		printf("\nYou're not eligible to vote!");
	}

	return 0;
}

