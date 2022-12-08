/*
 ============================================================================
 File name   : rand_condition.c
 Project     : Lab6-rand_condition
 Author      : Lobna_ElFadali
 
 Description : Define 1D array of 10 elements and fill it with
 random values between 1 and 10.
 Then search and count the number of values that satisfy this conditions:
 	 The previous and the next values are lower than the centre value.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int array[10];
	int count = 0;
	// Filling the array with random values from 0 to 1000
	for (i = 0; i < 10; i++)
	{
		array[i]= (rand() % (10-0+1)) + 0;
	}
	// Searching for condition
	for(i = 0; i<8; i++)
	{
		if(array[i] < array[i+1] &&
				array[i+2] < array[i+1])
		{
			count +=1;
		}
	}
	printf("%d", count);
	return 0;
}
