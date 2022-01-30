#include <stdio.h>
int main()
{
	int x,y,sol=1;
	printf("Enter the base number : ");
	scanf("%d",&x);
	printf("Enter the power : ");
	scanf("%d",&y);
	for (int i = 1; i <= y; ++i)
	{
		sol*=x;
	}
	printf("%d raise to power %d is %d",x,y,sol);
	return 0;
} 