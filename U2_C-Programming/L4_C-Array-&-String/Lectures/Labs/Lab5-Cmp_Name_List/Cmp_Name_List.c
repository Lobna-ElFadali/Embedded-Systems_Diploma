/*
 ============================================================================
 File name   : Cmp_Name_List.c
 Project     : Lab5-Cmp_Name_List
 Author      : Lobna_ElFadali
 
 Description : Enter your name, then check if it is
 stored in a given list of names.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	setbuf(stdout, NULL);
	char list[][14] = {"Lobna", "Gamal",
			"Mohamed", "Elfadali"};
	char name[14];
	int row = sizeof(list)/14;
	int i;

	printf("Enter your name: ");
	scanf("%s", name); // not gets(), to take first name only.
	for (i = 0; i < row; i++)
	{
		if(stricmp(name, list[i]) == 0)
		{
			printf("Congratulations, your name is listed.");
			break;
		}
	}
	if (i == row)
		printf("Sorry, your name is not listed.");

	return 0;
}
