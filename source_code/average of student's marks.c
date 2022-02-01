#include <stdio.h>
int main()
{
	int students; 
	printf("this programme finds average of student's total marks\n");
	printf("Enter the number of students : ");
	scanf("%d",&students);
	float avg=0, marks[students];
	for (int i=0;i<students;i++){
		printf("Enter marks of roll no %d : ",i+1);
		scanf("%f",&marks[i]);
		avg+=marks[i];
	}
	printf("Average of marks of %d students is : %f ",students,avg/students);
	return 0;
}