/*
 ============================================================================
 File name   : Polynomial.c
 Project     : Lab2-Polynomial
 Author      : Lobna_ElFadali
 
 Description : y = 5x^2 + 3x + 2
 Find y for x = {5, 16, 22, 3.5, 15} using arrays to reduce code size.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x[] = {5, 16, 22, 3.5, 15};
	/* We are just printing y, no need to
	 * save in a 20 bytes array y[5].
	 */
	float y;
	int i, xSize = sizeof(x) / sizeof(x[0]);

	for(i = 0; i < xSize; i++)
	{
		y= 5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("y(%.2f) = %.2f\n", x[i], y);
	}
	return 0;
}
