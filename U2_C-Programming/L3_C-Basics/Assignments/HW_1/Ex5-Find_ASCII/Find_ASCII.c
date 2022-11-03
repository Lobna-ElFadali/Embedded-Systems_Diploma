/*
 ============================================================================
 File name   : Find_ASCII.c
 Project     : Ex5-Find_ASCII
 Created on  : 3 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C Program to Find ASCII Value of a Character.

 ####################Console-Output####################
 Enter a character: G
 ASCII value of G = 71
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char inChar;

	printf("Enter a character: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &inChar);
	printf("ASCII value of G = %d", inChar);

	return 0;
}
