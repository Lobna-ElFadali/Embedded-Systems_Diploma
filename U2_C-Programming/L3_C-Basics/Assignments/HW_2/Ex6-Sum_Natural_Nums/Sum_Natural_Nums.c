/*
 ============================================================================
 File name   : Sum_Natural_Nums.c
 Project     : Ex6-Sum_Natural_Nums
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Positive integers 1, 2, 3, ... are known as natural numbers.
 This program takes a positive integer from user (n),
 then displays the value of 1+2+3+..+n.

 ####################Console-Output####################
 Enter an integer: 100
 Sum = 5050
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int in, i, sum;

	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &in);

	for (i = 1, sum = 0; i <= in; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);

	return 0;
}
