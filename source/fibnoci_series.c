#include <stdio.h>
int fib(int a);
long int fact(int a);
int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	printf("Factorial of %d is %ld \n",a,fact(a));
	fib(a);
	return 0;
}
int fib(int a){
	int x=0,y=1,z=0;
	printf("%d digits of  fibnocii series : ",a);
	for (z;z<=a;)
	{
		z=x+y;
		printf("%d\t",z);
		x=y;
		y=z;
	}
}
long int fact(int a) {
    if (a>=1)
        return a*fact(a-1);
    else
        return 1;
}