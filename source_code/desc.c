#include <stdio.h>
int main()
{
	int a;
	printf("This programme prints a descending series\nEnter a number : ");
	scanf("%d",&a);
	for (int i = a; i >= 1; --i)
	{
		printf("%d\n",i);
	}
	return 0;
}