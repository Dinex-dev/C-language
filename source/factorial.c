#include <stdio.h>
int fact();
int main()
{
	long int n;
	printf("This programme prints factorial of a given number\nEnter a number : ");
	scanf("%ld",&n);
	printf("Factorial of %d is %ld",n,fact(n));
	return 0;

}
int fact(long int n){
	long int fact=1;
	for (long int i = 1; i <= n; ++i)
	{
		fact*=i;
	}
	return fact;
}