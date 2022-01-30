#include <stdio.h>
#define size 10
int main()
{
	int num,i=0,found=0,len;
	printf("This programme finds a number in the given array\n");
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	for (int j = 0; j < len; ++j)
	{
		printf("Enter %d value :",j+1);
		scanf("%d",&arr[j]);
	}
	printf("which number do you want to find : ");
	scanf("%d",&num);
	for (i=0;i<len;i++){
		if(arr[i]==num){
			len=-10;
			break;
		}
	}
	if (len==-10)
	{
		printf("found it at %d place",i+1);
	}
	else{
		printf("not found");
	}
	return 0;
}