/*
 ============================================================================
 File name   : Largest_Num.c
 Project     : Ex3-Largest_Num
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C program to find the largest number among 3 float numbers.

 ####################Console-Output####################
 Enter three numbers: 12.2
 13.452
 10.193
 Largest number = 13.45
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float in1, in2, in3;

	printf("Enter three numbers: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f %f", &in1, &in2, &in3);

	if ((in1 >= in2) && (in1 >= in3))
		printf("Largest number = %.2f", in1);
	else if ((in2 >= in1) && (in2 >= in3))
		printf("Largest number = %.2f", in2);
	else
		printf("Largest number = %.2f", in3);


	return 0;
}
