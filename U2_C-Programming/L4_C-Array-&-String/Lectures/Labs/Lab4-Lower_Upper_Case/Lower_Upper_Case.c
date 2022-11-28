/*
 ============================================================================
 File name   : Lower_Upper_Case.c
 Project     : Lab4-Lower_Upper_Case
 Author      : Lobna_ElFadali

 Description : Write C program to convert a given string
 from to lower case and print it, then to upper case and
 print it without using string library.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char name[] = "LoBnA gAmaL";
	char a_ASCII = 'a'; // 97
	char A_ASCII = 'A'; // 65
	char diff = a_ASCII - A_ASCII;
	int i;
	// Change to lower case:
	for(i=0; name[i]!=0; i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] += diff;
		}
	}
	printf("%s\n", name);
	// Change to upper case:
	for(i=0; name[i]!=0; i++)
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			name[i] -= diff;
		}
	}
	printf("%s\n", name);
	return 0;
}
