/*
 ============================================================================
 File name   : Swap_Num_2.c
 Project     : Ex7-Swap_Num_2
 Created on  : 3 Nov 2022
 Author      : Lobna_ElFadali

 Description : 
 Write Source Code to Swap Two Variables Without using Temporary Variable.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b;

	printf("Enter value of a: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &b);

	b = a + b;
	a = b - a; /* a = entered value of b */
	b = b - a; /* b = entered value of a */

	printf("\nAfter swapping, value of a = %.2f", a);
	printf("\nAfter swapping, value of b = %.2f", b);
	return 0;
}
