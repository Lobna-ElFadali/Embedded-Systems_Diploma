/*
 ============================================================================
 File name   : Sum_1_to_99.c
 Project     : Lab4-Sum_1_to_99
 Created on  : 30 Oct 2022
 Author      : Lobna_ElFadali

 Description : Calculate sum of values between 1 and 99
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Using for: */
	/*
	int sum, i;

	for (i=1, sum=0; i<=99; i++)
	{
		sum += i;
	}
	printf("Sum of values between (1 and 99) is: %d\n", sum);
	*/

	/* Using while: */
	int sum = 0, i = 1;

	while (i <= 99)
	{
		sum += i;
		i += 2;
	}

	printf("Sum of odd values between (1 and 99) is: %d\n", sum);

	return EXIT_SUCCESS;
}
