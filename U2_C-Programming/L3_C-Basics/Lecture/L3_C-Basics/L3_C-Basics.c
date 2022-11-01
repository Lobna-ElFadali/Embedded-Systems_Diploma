/*
 ============================================================================
 File name   : L3_C-Basics.c
 Project     : L3_C-Basics
 Created on  : 25 Oct 2022
 Author      : Lobna_ElFadali

 Description : Lecture Miscellaneous Exercises
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	/*Testing int size overflow*/
	/*unsigned int x = pow(2,32)-1;
	printf("%d",x);*/
/***************************************************/

	/*I0 printf & scanf bug*/
	/*int test;
	printf("Enter an integer: ");
	scanf("%d",&test);	//store it in test address
	printf("\nYou entered %d",test);*/
	/*Solving printf & scanf bug using fflush*/
	/*int test;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&test);	//store it in test address
	printf("You entered %d",test);*/
/***************************************************/

	/*printf formats*/
	/*int a =97;
	printf("int a = %d\nchar a = %c",a,a);*/

	/*int x = 63524;
	printf("%d,%6d,%10d,%010d",x,x,x,x);*/
	/*float y = 63524.69852365;
	printf("%f,%10.2f,%10.3f",y,y,y);*/
/***************************************************/

	/*Exercise: Printf Tricks*/
	/*unsigned char x = 0;
	printf("variable width control:\n");
	printf("right-justified variable width: %*c\n", 5, x);
	printf("right-justified variable width: %*c\n", 5, 'x');
	printf("right-justified variable width: '%*c'\n", 5, 'x');
	printf("left-justified variable width: '%*c'\n", -5, 'x');*/

	/*int r =printf("strings\n");
	printf("(the last printf printed %d characters)\n", r);*/

	/*const char* s = "Hello";
	printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",
			s, s, 10,s, 4,s, 10,0,s);*/

	/*printf("Characters:\t%c %%\n",65);*/

	/*printf("Integers\n");
	printf("%%i %i\n%%d %d\n%%06i %06i\n%%.6i %.6i\n%%i %i\n"
			"%%.0i [%.0i]\n%%+i %+i\n%%u %u",1, 2, 3, 3, 0, 0, 4, -1);*/

	/*int x = -1.0;
	printf("%%d %d\t%%X %X\t%%u %u",x, x, x);*/

	/*printf("Hex:\n%%x %x\n%%X %X\n%%#x %#x\n",10, 10, 10);*/
	/*printf("Octal:\n%%o %o\n%%#o %#o\n%%#o %#o\n",10, 10, 4);*/

	/*printf("Floating Point\n");*/
	/*printf("Rounding:\n%%f %f\n%%.0f %.0f\n%%.32f %.32f\n"
			,1.5, 1.5, 1.5);*/

	/*printf("Padding:\n%%.2f %.2f\n%%5.2f [%5.2f]\n%%05.2f [%05.2f]\n"
			,1.5, 1.5, 1.5);*/

	/*printf("Scientific:\n%%E %E\n%%e %e\n",1.5, 1.5);*/

	/*printf("Special Values:\n1/0 = %f\n0/0 = %g", 1.0/0.0, 0.0/0.0);*/

	/*unsigned char x = 0;*/
	/*printf("%d %d %d\n",++x,x,x++);	//starts seq from the right!
	printf("%d %d %d\n",x++,++x,x);	//starts seq from the right!*/

	/*printf("++x = %d\n", ++x);	//x=1
	printf("x = %d\n", x);	//x=1
	printf("x++ = %d\n", x++);	//x=2
	printf("x++ = %d\n", x++);	//x=3
	printf("++x = %d\n", ++x);	//x=4
	printf("x = %d\n", x);	//x=4*/
/***************************************************/

	/*Maths and Logic Operations*/
	/*printf("0XA4 ^ 0X9C = %#X", 0xA4 ^ 0x9c);*/
	/*printf("0XA4 >> 2 = %#X", 0xA4 >> 2);*/	/*Shifted right by 2 bits*/

	/*printf("1-0x21 << 1 = %#X\n",0x21 << 1);
	printf("2-0xA4 << 2 = %#X\n",0xA4 << 2);
	printf("2-0xA4 << 2 = %d\n",0xA4 << 2);
	char z = 0xA4 << 2;	//Overflow warning!
	printf("3-0xA4 << 2 = %#X\n", z);
	printf("3-0xA4 << 2 = %d\n",z);
	unsigned char a = 0xA4;
	unsigned char b = a << 2;
	printf("4-0xA4 << 2 = %#X\n", b);
	printf("4-0xA4 << 2 = %d\n",b);*/

	/*Set Specific bit (n) to 1*/
	/*unsigned char r = 0b10000000;
	unsigned char n = 2;
	r |= 1<<n;
	printf("%#X\n",r);*/
	/*Clear Specific bit (n) to 0*/
	/*r &= ~(1<<n);
	printf("%#X\n",r);*/
	/*Toggle Specific bit (n)*/
	/*r ^= 1<<n;
	printf("%#X\n",r);*/

	/*Exercise: Condition Operators*/
	/*printf("3 && 0 = %d\n", 3 && 0);
	printf("-15 || 0 = %d\n", -15 || 0);
	printf("!(-15) = %d\n", !(-15));*/

	/*Compiler only do the second condition when it has to*/
	/*int x = 1;
	int y = 1;
	printf("++x || ++y = %d\n", ++x || ++y);
	printf("x = %d\ty = %d\n", x, y);
	x = -1;	y = 1;
	printf("\n++x || ++y = %d\n", ++x || ++y);
	printf("x = %d\ty = %d\n", x, y);*/
/***************************************************/

	/*Printing Hello World in a loop:*/
	/*int i;
	for(i=0; i<10; i++)
	{
		printf("%d : Hello World\n", i);
	}*/
/***************************************************/

	/* Break: */
	/*
	int i;
	for (i=0; i<10; i++)
	{
		if (i == 5)
		{
			printf("\nComing out of the loop when i = ");
			break;
		}
		printf("%d ", i);
	}
	*/

	/* Continue: */
	/*
	int i;
	for(i=0; i<10; i++)
	{
		if(i==5 || i==6)
		{
			printf("\nSkipping %d using continue\n", i);
			continue;
		}
		printf("%d ", i);
	}
	*/

	return 0;
}
