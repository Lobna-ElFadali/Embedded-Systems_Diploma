/*
 ============================================================================
 File name   : Multidimentional_Array.c
 Project     : Ex1-Multidimentional_Array
 Author      : Lobna_ElFadali

 Description : Write a C program to find the sum of two matrices of order 2*2
 using multidimensional arrays. Elements of matrix are entered by user.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	setbuf(stdout, NULL);
	float matrix_1[2][2], matrix_2[2][2], matrix_sum[2][2];
	int row, col;
	// Entering elements of 1st matrix
	printf("Enter the elements of 1st matrix\n");
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 2; col++)
		{
			printf("Enter a%d%d: ", row+1, col+1);
			scanf("%f;", &matrix_1[row][col]);
		}
	}
	// Entering elements of 2nd matrix,
	printf("Enter the elements of 2nd matrix\n");
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 2; col++)
		{
			printf("Enter b%d%d: ", row+1, col+1);
			scanf("%f;", &matrix_2[row][col]);
		}
	}
	// calculating sum, and printing
	printf("\nSum Of Matrix:\n");
	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 2; col++)
		{
			matrix_sum[row][col] =
					matrix_1[row][col] + matrix_2[row][col];
			printf("%.1f\t", matrix_sum[row][col]);
		}
		printf("\n");
	}

	return 0;
}
