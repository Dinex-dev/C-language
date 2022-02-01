#include <stdio.h>
int array(int len,int arr[]){
	for (int i=0;i<len;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\n");
	return 0;
}
int main()
{
	int len,spam;
	printf("Enter length of the array : ");
	scanf("%d",&len);
	int arr[len];
	for (int i=0;i<len;i++){
		printf("Enter %d value : ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<len-1;i++)
	{	
		for (int j=0;j<len-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				array(len,arr);
				spam=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=spam;
			}
		}
		printf("\n");
	}
	printf("sorted array : ");
	array(len,arr);
	return 0;
}