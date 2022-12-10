/*
 ============================================================================
 File name   : Array_Average.c
 Project     : Ex2-Array_Average
 Author      : Lobna_ElFadali
 
 Description : Write C program that:
 	 - Takes n number of elements from user (where n is specified by user)
 	 - Stores data in an array
 	 - Calculate the average of those numbers
 ============================================================================
 */

#include <stdio.h>

int main()
{
	setbuf(stdout, NULL);
	int n, i;
	float data[100], sum;
	// Entering number of data
	n_entry:
	printf("Enter the number of data: ");
	scanf("%d", &n);
	// Ensuring n is between 1 and 100
	if (n <= 0 || n > 100)
	{
		printf("Error! number should be between 1 and 100.\n");
		goto n_entry;
	}
	// Entering data and calculating sum
	for (i = 0, sum = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i+1);
		scanf("%f", &data[i]);
		sum += data[i];
	}
	printf("Average = %.2f", sum/n);

	return 0;
}
