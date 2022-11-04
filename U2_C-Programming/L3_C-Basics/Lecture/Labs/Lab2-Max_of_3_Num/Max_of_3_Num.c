/*
 ============================================================================
 File name   : Max_of_3_Num.c
 Project     : Lab2-Max_of_3_Num
 Created on  : 29 Oct 2022
 Author      : Lobna_ElFadali

 Description : Find the largest value of 3 user-entered values
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Enter three values: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &num1, &num2, &num3);


	if((num1 >= num2) && (num1 >= num3))
	{
		printf("The largest value is %d", num1);
	}
	else if((num2 >= num1) && (num2 >= num3))
	{
		printf("The largest value is %d", num2);
	}
	else
	{
		printf("The largest value is %d", num3);
	}

	return 0;
}

