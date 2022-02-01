#include <stdio.h>

int main()
{
	printf("   *\n  ***\n *****\n*******\n");
	int a;
	printf("This programme prints a diamond with the width of given number\n");
	printf("Enter a number : ");
	scanf("%d",&a);	
	for (int i = 1; i < a; i+=2)
	{
		
		for (int k=0;k<=(a-i)/2;++k)
		{
			printf(" ");
		}
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = a; i >=1; i-=2)
	{
		for (int k=0; k < (a-i)/2 ; ++k)
		{
			printf(" ");
		}
		for (int j=1;j<=i;++j){
			printf("*");
		}
		printf("\n");
	}

	return 0;
	
}