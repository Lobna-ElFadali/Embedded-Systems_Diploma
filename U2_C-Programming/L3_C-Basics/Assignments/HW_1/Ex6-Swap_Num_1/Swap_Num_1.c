/*
 ============================================================================
 File name   : Swap_Num_1.c
 Project     : Ex6-Swap_Num_1
 Created on  : 3 Nov 2022
 Author      : Lobna_ElFadali
 
 Description :
 Write Source Code to Swap Two Numbers Entered by User.

 ####################Console-Output####################
 Enter value of a: 1.20
 Enter value of b: 2.45

 After swapping, value of a = 2.45
 After swapping, value of b = 1.2
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b;

	printf("Enter value of a: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &b);
	/*
	printf("\nAfter swapping, value of a = %.2f", b);
	printf("\nAfter swapping, value of b = %.1f", a);
	*/

	/* We can use temporary variable to avoid confusion */
	float temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping, value of a = %.2f", a);
	printf("\nAfter swapping, value of b = %.1f", b);

	return 0;
}
