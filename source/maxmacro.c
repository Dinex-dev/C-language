#include <stdio.h>
#define max(x,y,z) (x>y?(x>z?x:z):(y>z?y:z))
int main()
{
	int a,b,c;
	printf("Enter 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",max(a,b,c));
	
}