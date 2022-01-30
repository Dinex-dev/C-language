#include <stdio.h>
int main()
{
	int a,num=1;
	printf("This programme prints pattern like : \n1	\n2	3	\n4	5	6\n");
	printf("Enter a number of rows : ");
	scanf("%d",&a);
	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}