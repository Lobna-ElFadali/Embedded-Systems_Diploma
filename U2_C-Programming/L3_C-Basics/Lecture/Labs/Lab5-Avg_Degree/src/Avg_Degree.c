/*
 ============================================================================
 File name   : Avg_Degree.c
 Project     : Lab5-Avg_Degree
 Created on  : 30 Oct 2022
 Author      : Lobna_ElFadali

 Description : Calculate the average degree of a scanned number
               of students.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Using for(): */
	/*
	int studentsNum, i;
	float degree, totalDegree;

	printf("Enter the number of students: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &studentsNum);
	for (i=1, totalDegree=0; i<=studentsNum; i++)
	{
		printf("Enter student (%d) degree: ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);
		totalDegree += degree;
	}
	printf("Average students degree is: %f", totalDegree/studentsNum);
	 */

	/* Using while(1): */
	int studentsNum = 0;
	float degree, totalDegree = 0;

	printf("Enter negative value to exit!\n");

	while(1)
	{
		printf("Enter student (%d) degree: ", studentsNum+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);
		if (degree < 0)	break;
		totalDegree += degree;
		studentsNum++;
	}
	printf("Average students degree is: %f",
			totalDegree/studentsNum);

	return EXIT_SUCCESS;
}
