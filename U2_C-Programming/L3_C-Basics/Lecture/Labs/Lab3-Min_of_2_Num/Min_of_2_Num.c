/*
 ============================================================================
 File name   : Min_of_2_Num.c
 Project     : Lab3-Min_of_2_Num
 Created on  : 30 Oct 2022
 Author      : Lobna_ElFadali

 Description : Find the minimum value of 2 user-entered values
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	/* Using Inline Condition: */
		int a, b, min;
		printf("Enter two numbers: ");
		fflush(stdin);	fflush(stdout);
		scanf("%d %d", &a, &b);
		min = (a<b) ? a : b;
		printf("The minimum value is %d\n", min);

		return 0;
}

