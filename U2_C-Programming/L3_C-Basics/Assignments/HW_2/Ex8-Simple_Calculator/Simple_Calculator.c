/*
 ============================================================================
 File name   : Simple_Calculator.c
 Project     : Ex8-Simple_Calculator
 Created on  : 5 Nov 2022
 Author      : Lobna_ElFadali

 Description : 
 This program takes an arithmetic operator (+,-,*,/) and 2 operands from user
 and performs the operation on those 2 operands depending on the entered operator.

 ####################Console-Output####################
 Enter operator either + or - or * or divide: -
 Enter two operands: 3.4
 8.4
 3.4-8.4 = -5.0
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char operator;
	float in1, in2;

	printf("Enter operator either\n+ or - or * or divide: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f", &in1, &in2);

	switch (operator)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",
				in1, in2, in1+in2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",
				in1, in2, in1-in2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",
				in1, in2, in1*in2);
		break;
	case '/':
	{
		if (in1 != 0 && in2 != 0 )
			printf("%.1f / %.1f = %.1f",
					in1, in2, in1/in2);
		else
			printf("%.1f / %.1f = %g",
					in1, in2, in1/in2);
	}
	break;
	default:
		printf("Error! You entered wrong operator");
		break;
	}
	return 0;
}
