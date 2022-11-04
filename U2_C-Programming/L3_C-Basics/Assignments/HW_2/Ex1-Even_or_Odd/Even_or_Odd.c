/*
 ============================================================================
 File name   : Even_or_Odd.c
 Project     : Ex1-Even_or_Odd
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C program to check whether a number is even or odd.

 ####################Console-Output####################
 Console Output 1
 Enter an integer you want to check: 25
 25 is odd.

 Console Output 2
 Enter an integer you want to check: 12
 12 is even.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int inNum;

	printf("Enter an integer you want to check: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &inNum);

	/* First solution using AND: */

	if ((inNum & 1) == 0)
		printf("%d is even.\n", inNum);
	else
		printf("%d is odd.\n", inNum);


	/* Second solution using modulus: */
	/*
	if ((inNum % 2) == 0)
		printf("%d is even.\n", inNum);
	else
		printf("%d is odd.\n", inNum);
	*/

	return 0;
}
