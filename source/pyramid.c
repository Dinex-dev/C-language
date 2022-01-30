#include <stdio.h>
int main()
{
	int a;
	printf("This programme prints a pyramid of given width\n");
	printf("Enter a number : ");
	scanf("%d",&a);
	for (int i = 1; i <= a; ++i)
	{
		for (int k = 0; k < a-i/2; ++k)
		{
			printf(" ");
		}
		for (int j = 0; j < i; ++j)
		{
			
			
			printf("*");
		}


		printf("\n");
		
	}
	return 0;
}