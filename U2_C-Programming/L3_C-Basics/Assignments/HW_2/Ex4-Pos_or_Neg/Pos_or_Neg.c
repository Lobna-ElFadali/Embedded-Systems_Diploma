/*
 ============================================================================
 File name   : Pos_or_Neg.c
 Project     : Ex4-Pos_or_Neg
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali

 Description : 
 This program takes a number from user and checks whether that number is
 positive, negative or zero.

 ####################Console-Output####################
 Console-Output 1:
 Enter a number: 12.3
 12.30 is positive.

 Console-Output 2:
 Enter a number: 0
 You entered zero.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float in;

	printf("Enter a number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &in);

	if (in > 0)
		printf("%.2f is positive.", in);
	else if (in < 0)
		printf("%.2f is negative.", in);
	else
		printf("You entered zero.");

	return 0;
}
