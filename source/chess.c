#include <stdio.h>
int main()
{
	long int a,sol=0;
	printf("This is a programme to count number of squares in chess board\n");
	printf("Enter the dimention of chess board : ");
	scanf("%ld",&a);
	for (int i = 1; i <=a; ++i)
	{
		sol+=i*i;
	}
	printf("There are %ld squares in an %ld by %ld board\n",sol,a,a);
	return 0;
}