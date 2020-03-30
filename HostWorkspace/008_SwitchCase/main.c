/*
 * main.c
 *
 *  Created on: Mar 30, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14

void print_menu(void);

int main(void)
{
	char figure = '0';
	float a_base = 0;
	float b_base = 0;
	float height = 0;
	float radius = 0;

	printf("Welcome to Area calculation program!\n");

	while(1)
	{
		print_menu();
		scanf(" %c", &figure);

		switch(figure)
		{
			case 't':
				printf("\nTriangle selected!\n");
				printf("Please enter base (b) value: ");
				scanf(" %f", &b_base);
				printf("Please enter height (h) value: ");
				scanf(" %f", &height);
				printf("\nArea of triangle is %0.2f\n", b_base * height/2);
				break;

			case 'z':
				printf("\nTrapezoid selected!\n");
				printf("Please enter base (a) value: ");
				scanf(" %f", &a_base);
				printf("Please enter base (b) value: ");
				scanf(" %f", &b_base);
				printf("Please enter height (h) value: ");
				scanf(" %f", &height);
				printf("\nArea of trapezoid is %0.2f\n",(a_base + b_base) * height/2);
				break;

			case 'c':
				printf("\nCircle selected!\n");
				printf("Please enter radius: ");
				scanf(" %f", &radius);
				printf("\nArea of circle is %0.2f\n", radius * radius * PI);
				break;

			case 's':
				printf("\nSquare selected!\n");
				printf("Please enter base (a) value: ");
				scanf(" %f", &a_base);
				printf("\nArea of square is %0.2lf\n",a_base * a_base);
				break;

			case 'r':
				printf("\nRectangle selected!\n");
				printf("Please enter base (a) value: ");
				scanf(" %f", &a_base);
				printf("Please enter base (b) value: ");
				scanf(" %f", &b_base);
				printf("\nArea of rectangle is %0.2lf\n",a_base * b_base);
				break;

			case 'q':
				goto quit;
				break;

			default:
				printf("\nWrong input, please try again!\n");
		}
	}

	quit:
	printf("\nQuiting program!");

	return 0;
}

void print_menu(void)
{
	printf("\nPlease select geometrical figure from the list below:");
	printf("\nEnter 't' for triangle!");
	printf("\nEnter 'z' for trapeziod!");
	printf("\nEnter 'c' for circle!" );
	printf("\nEnter 's' for square!");
	printf("\nEnter 'r' for rectangle!");
	printf("\nEnter your choice here: \t");
}
