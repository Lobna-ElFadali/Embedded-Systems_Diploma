/*
 ============================================================================
 File name   : Alphabet_or_Not.c
 Project     : Ex5-Alphabet_or_Not
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali

 Description : 
 This program takes a character from user and checks whether that character
 is an alphabet or not.

 ####################Console-Output####################
 Console-Output 1:
 Enter a character: *
 * is not an alphabet.

 Console-Output 2:
 Enter a character: K
 K is an alphabet.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char in;

	printf("Enter a character: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &in);

	if (((in >= 'a') && (in <= 'z'))||
		((in >= 'A') && (in <= 'Z')))
		printf("%c is an alphabet.", in);
	else
		printf("%c is not an alphabet.", in);

	return 0;
}
