// write a programme to add 2 arrays of integers
#include <stdio.h>
int add();
int main()
{
	int a[5],b[5],c[5],i;
	printf("Enter the elements of array a\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of array b\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&b[i]);
	}
	add(a,b,c);
}
int add(int a[],int b[],int c[])
{
	int i;
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("The sum of the two arrays is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}