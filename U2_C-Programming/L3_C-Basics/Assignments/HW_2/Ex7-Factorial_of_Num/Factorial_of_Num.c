/*
 ============================================================================
 File name   : Factorial_of_Num.c
 Project     : Ex7-Factorial_of_Num
 Created on  : 4 Nov 2022
 Author      : Lobna_ElFadali
 
 Description : 
 This program takes an integer from user.
 If user enters negative integer, error message is displayed.
 Otherwise, the factorial of that number is displayed.
 	 factorial (+n) = 1*2*3*..*n
 	 factorial (0) = 1
 	 factorial (-n) does not exist.
 ####################Console-Output####################
 Console-Output 1:
 Enter an integer: -5
 Error!!! Factorial of negative number doesn't exist.

 Console-Output 2:
 Enter an integer: 10
 Factorial = 3628800
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int in;
	unsigned int i;
	unsigned long long factorial; /* Factorial could be very long number. */

	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &in);

	if (in > 0)
	{
		for (i = 1, factorial = 1; i <= in; i++)
		{
			factorial *= i;
		}
		printf("Factorial = %I64u", factorial);
	}
	else if (in == 0)
		printf("Factorial = %d", 1);
	else
		printf("Error!!! Factorial of negative number "
				"doesn't exist.");

	return 0;
}
