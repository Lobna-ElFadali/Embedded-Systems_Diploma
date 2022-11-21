/*
 ============================================================================
 File name   : Matrix_Transpose.c
 Project     : Lab3-Matrix_Transpose
 Author      : Lobna_ElFadali
 
 Description : Calculate and print the transpose of
 3x3 matrix.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int row, column;
	float matrix[3][3], transpose[3][3];

	setbuf(stdout, NULL);
	// Entering matrix elements and calculating the transpose
	for (row = 0; row < 3; row++)
	{
		for (column = 0; column < 3; column++)
		{
			printf("Enter the item (%d, %d): ", row, column);
			scanf("%f", &matrix[row][column]);
			transpose[column][row] = matrix[row][column];
		}
	}
	// Printing the matrix
	printf("The matrix is\n");
	for (row = 0; row < 3; row++)
	{
		for (column = 0; column < 3; column++)
		{
			printf("%.2f\t", matrix[row][column]);
		}
		printf("\r\n");
	}
	// Printing the transpose matrix
	printf("The transpose matrix is\n");
	for (row = 0; row < 3; row++)
	{
		for (column = 0; column < 3; column++)
		{
			printf("%.2f\t", transpose[row][column]);
		}
		printf("\r\n");
	}

	return 0;
}
