/*
 ============================================================================
 File name   : Multiply_Float.c
 Project     : Ex4-Multiply_Float
 Created on  : 3 Nov 2022
 Author      : Lobna_ElFadali
 
 Description :
 Write C Program to Multiply two Floating Point Numbers.

 ####################Console-Output####################
 Enter two numbers: 2.4
 1.1
 Product: 2.640000
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float in1, in2;

	printf("Enter two numbers: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f", &in1, &in2);
	printf("Product: %f", in1 * in2);

	return 0;
}
