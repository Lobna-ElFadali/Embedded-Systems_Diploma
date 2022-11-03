/*
 ============================================================================
 File name   : Print_Int.c
 Project     : Ex2-Print_Int
 Created on  : 2 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C Program to Print an Integer Entered by a User.

 ####################Console-Output####################
 Enter an integer: 25
 You entered: 25
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int input;
	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &input);
	printf("You entered: %d", input);

	return 0;
}
