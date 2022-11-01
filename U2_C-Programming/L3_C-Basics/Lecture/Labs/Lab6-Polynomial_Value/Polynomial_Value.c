/*
 ============================================================================
 File name   : Polynomial_Value
 Project     : Lab6-Polynomial_Value
 Created on  : 30 Oct 2022
 Author      : Lobna_ElFadali

 Description : Enter value of x, then calculate y=5x^2+3x+2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

int main(void) {
	float x, y;
	char repeat;
	/* Using do-while */
	/*
	do
	{
		printf("\nEnter value of x: ");
		fflush(stdin);	fflush(stdout);
		scanf("%f", &x);
		y = 5*x*x + 3*x + 2;
		printf("y(%f) = %f\n", x, y);
		fflush(stdin);	fflush(stdout);
		printf("\nDo you want to evaluate again? (y/n): ");
		fflush(stdin);	fflush(stdout);
		scanf("%c", &repeat);
	}
	while(repeat == 'y');
	*/
	/* Using goto */
	Again:
	printf("\nEnter value of x: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &x);
	y = 5*x*x + 3*x + 2;
	printf("y(%f) = %f\n", x, y);
	fflush(stdin);	fflush(stdout);
	printf("\nDo you want to evaluate again? (y/n): ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &repeat);
	if (repeat == 'y')
		goto Again;
}


