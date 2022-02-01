#include <stdio.h>
int main()
{
	int a,b,c,gre;
	printf("Enter A ");
	scanf("%d",&a);
	printf("Enter B ");
	scanf("%d",&b);
	printf("Enter C ");
	scanf("%d",&c);
	gre=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n %d",gre);
	
}