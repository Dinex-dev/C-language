#include <stdio.h>
int main()
{
	int a,b,c;
	printf("This programme swaps two numbers with a third variable\n");
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swaped values are : %d %d \n",a,b);
	return 0;
}
