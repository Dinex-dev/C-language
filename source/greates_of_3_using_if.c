#include <stdio.h>
int main()
{
	int a,b,c;
	printf("This number finds greatest of three numbers using if/else conditions\n\n");
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);

	if (a>b&&a>c)
	{
		printf("%d is the greatest ",a);
	}
	else if (b>a&&b>c)
	{
		printf("%d is the greatest ",b);
	}
	else 
	{
		printf("%d if the greatest ",c);
	}
}