#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,sub6,total,percent;
	printf("Enter your marks in Subject 1 :");
	scanf("%d",&sub1);
	printf("Enter your marks in Subject 2 :");
	scanf("%d",&sub2);
	printf("Enter your marks in Subject 3 :");
	scanf("%d",&sub3);
	printf("Enter your marks in Subject 4 :");
	scanf("%d",&sub4);
	printf("Enter your marks in Subject 5 :");
	scanf("%d",&sub5);
	printf("Enter your marks in Subject 6 :");
	scanf("%d",&sub6);
	total=sub1+sub2+sub3+sub4+sub5+sub6;
	printf("your total marks are; %d\n",total);
	printf("Your Total Percentage is: %d",total/6);
}