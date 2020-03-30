/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 *
 *  Write a program to calculate income tax payable
 *  of the user. Tax is calculated as per table below.
 *
 */
#include <stdio.h>

#define TAX_RATE_12		12
#define TAX_RATE_22		22
#define TAX_RATE_32		32


int main(void)
{
	double total_income = 0;
	double tax_pay = 0;

	printf("Please enter your total income: ");
	scanf("%lf", &total_income);

	if(total_income < 9525)
	{
		printf("\nYour tax rate is 0 percent!");
	}
	else if(total_income >= 9526 && total_income <= 38700)
	{
		tax_pay = total_income * TAX_RATE_12/100;
		printf("\nYour tax rate is 12 percent!");
		printf("\nYour total tax payment is $%0.2lf!", tax_pay);
	}
	else if(total_income >= 38701 && total_income <= 82500)
	{
		tax_pay = total_income * TAX_RATE_22/100;
		printf("\nYour tax rate is 22 percent!");
		printf("\nYour total tax payment is $%0.2lf!", tax_pay);
	}
	else
	{
		tax_pay = total_income * TAX_RATE_32/100 + 1000;
		printf("\nYour tax rate is 32 percent!");
		printf("\nYour total tax payment is $%0.2lf!", tax_pay);
	}

	return 0;
}

