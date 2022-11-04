/*
 ============================================================================
 File name   : Vowel_or_Consonant.c
 Project     : Ex2-Vowel_or_Consonant
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 Write C program to check vowel (a, e, i, o, u) or consonant.

 ####################Console-Output####################
 Console Output 1
 Enter an alphabet: i
 i is a vowel.

 Console Output 2
 Enter an alphabet: G
 G is a consonant.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char inChar;
	printf("Enter an alphabet: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &inChar);

	switch (inChar)
	{
	case 'a': case 'A':
	case 'e': case 'E':
	case 'i': case 'I':
	case 'o': case 'O':
	case 'u': case 'U':
	{
		printf("%c is a vowel.", inChar);
	}
	break;
	default:
	{
		printf("%c is a consonant.", inChar);
	}
	break;
	}

	return 0;
}
