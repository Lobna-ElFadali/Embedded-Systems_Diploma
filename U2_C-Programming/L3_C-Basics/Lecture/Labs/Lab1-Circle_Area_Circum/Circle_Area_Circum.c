/*
 ============================================================================
 File name   : Circle_Area_Circum.c
 Project     : Lab1-Circle_Area_Circum
 Created on  : 29 Oct 2022
 Author      : Lobna_ElFadali

 Description : User has to choose between calculating circle area
 	 	 	   or circle circumference.
 	 	 	   * a for calculating area
 	 	 	   * c for calculating circumference
 	 	 	   * other letters ==> error message
 	 	 	   followed by printing the answer.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	float radius, area, circum;
	unsigned char choice;

	printf("Enter circle radius: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f", &radius);
	fflush(stdin);	fflush(stdout);
	printf("Enter 'a' to print the area or 'c' to print the circumference: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &choice);

/*Using if condition:********************************************/
	/*if(choice == 'a')
	{
		area = 3.14159 * pow(radius, 2);
		printf("\nArea = %f", area);
	}
	else if(choice == 'c')
	{
		circum = 2 * 3.14159 * radius;
		printf("\nCircumference = %f", circum);
	}
	else
	{
		printf("Error!");
	}*/

/*Using Switch-Case:*********************************************/
	switch (choice)
	{
	case 'a':
	case 'A':
	{
		area = 3.14159 * pow(radius, 2);
		printf("\nArea = %f", area);
	}
	break;
	case 'c':
	case 'C':
	{
		circum = 2 * 3.14159 * radius;
		printf("\nCircumference = %f", circum);
	}
	break;
	default:
	{
		printf("Error!");
	}
	break;
	}

	return 0;
}

