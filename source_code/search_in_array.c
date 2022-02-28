#include <stdio.h>
#define size 10
int main()
{
	int num,i=0,len,found;
	printf("This programme finds a number in the given array\n");
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	for (int j = 0; j < len; ++j)
	{
		printf("Enter %d value :",j+1);
		scanf("%d",&arr[j]);
	}
	printf("Which number do you want to find : ");
	scanf("%d",&num);
	for (i=0;i<len;i++){
		if(arr[i]==num){
			found=-10;
			break;
		}
	}
	if (found==-10)
	{
		printf("%d found at index %d\n",num,i);
	}
	else{
		printf("not found");
	}
	for (int i = 0; i < len; i++)
	{
		for (int j=0;j<len-i;j++)
		{
			if (arr[i]>arr[i+j])
			{
			arr[i]=arr[i]+arr[i+j];
			arr[i+j]=arr[i]-arr[i+j];
			arr[i]=arr[i]-arr[i+j];
			}
		}
		
	}
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}