/*
 ============================================================================
 File name   : Add_Int.c
 Project     : Ex3-Add_Int
 Created on  : 3 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C Program to Add Two Integers.

 ####################Console-Output####################
 Enter two integers: 12
 11
 Sum: 23
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int in1, in2;

	printf("Enter two integers: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d", &in1, &in2);
	printf("Sum: %d", in1 + in2);

	return 0;
}
