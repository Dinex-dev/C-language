#include <stdio.h>
int main()
{
	int len,spam;
	printf("Enter the Length of array : ");
	scanf("%d",&len);
	int arr[len];
	for (int i = 1; i <= len; i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&arr[i]);
	}
	for (int i = 1; i <= len; i++)
	{
		printf("%d ,",arr[i]);
	}
	printf("\n");
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-i; j++)
		{
			
			if (arr[j]>arr[j+1])
			{
				spam=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=spam;
			}
			
		}
		
	}
	for (int i = 1; i <= len; i++)
	{
		printf("%d ,",arr[i]);
	}
	return 0;
}
