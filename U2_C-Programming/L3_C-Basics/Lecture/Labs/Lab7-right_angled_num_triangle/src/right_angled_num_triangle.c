/*
 ============================================================================
 File name   : right_angled_num_triangle.c
 Project     : Lab7-right_angled_num_triangle
 Created on  : 30 Oct 2022
 Author      : Lobna_ElFadali

 Description : Print a right-angled triangle of numbers.
			   The first line counts from 0 to 9,
			   The second line counts from 1 to 9, and so on.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row, column;

	for(row =0; row<10; row++)
	{
		for(column=row; column<10; column++)
		{
			printf("%d ", column);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
