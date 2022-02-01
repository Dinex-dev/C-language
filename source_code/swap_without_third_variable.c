#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("swaped values are : \n A=%d \n B=%d \n",a,b);
}