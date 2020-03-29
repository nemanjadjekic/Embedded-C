/*
 * math.c
 *
 *  Created on: Mar 29, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include "math.h"

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	if (a > b)
	{
		return a - b;
	}

	return b - a;
}

long long int mul(int a, int b)
{
	return (long long int)a * b;
}

float div(int a, int b)
{
    return ((float)a) / (float)b;
}
