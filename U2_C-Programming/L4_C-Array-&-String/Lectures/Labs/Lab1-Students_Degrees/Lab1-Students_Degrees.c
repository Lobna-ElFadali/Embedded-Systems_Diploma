/*
 ============================================================================
 File name   : Lab1-Students_Degrees.c
 Project     : Lab1-Students_Degrees
 Created on  : 9 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : Store and print 10 student degrees.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float degree[10];
	int i;
	// Scanning students degrees
	for (i = 0; i < 10; i++)
	{
		printf("\nEnter student %d degree: ", i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f", &degree[i]);
	}
	// Printing students degrees
	for (i = 0; i < 10; i++)
	{
		printf("Student %d degree is %f\n"
				, i+1, degree[i]);
	}

	return 0;
}
