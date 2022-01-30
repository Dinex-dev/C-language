#include <stdio.h>

int main()
{
	int len,i=0,large,small;
	printf("Enter the length of array : ");
	scanf("%d",&len);
	int arr[len];
	for (int j = 0; j < len; ++j)
	{
		printf("Enter %d value :",j+1);
		scanf("%d",&arr[j]);
	}
	large=arr[0];
	small=arr[0];
	for (i = 0; i < len; ++i)
	{
		if (large<arr[i])
		{
			large=arr[i];
		}
	}
	for (i = 0; i < len; ++i)
	{
		if (small>arr[i])
		{
			small=arr[i];
		}
	}
	printf("%d is the largest number in the array\n",large);
	printf("%d is the smallest numer in the array",small);
	return 0;
}