/*
 * main.c
 *
 *  Created on: Mar 29, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Sum %d\n", sum(5,4));
	printf("Sub %d\n", sub(11,4));
	printf("Mult %llu\n", mul(9,7));
	printf("Div %.2f\n", div(19,4));

	return 0;
}

