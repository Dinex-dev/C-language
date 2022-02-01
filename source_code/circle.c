#include <stdio.h>
#define pi 3.14
int area();
int pm();
int main()
{
	int r;
	printf("enter radius : ");
	scanf("%d",&r);
	printf("area of a circle with radius %d is %d\n",r,area(r));
	printf("perimeter of a circle with radius %d is %d",r,pm(r));
	return 0;
}
int pm(int a){
	return 2*pi*a;
}
int area(int a)
{
	return pi*a*a;
}