#include <stdio.h>
int main()
{
	int arr[]={27,32,51,66,23,13,57,85};
	int var;
	for (int j = 0; j < 8; ++j)
	{
	for (int i = 0; i < 8; ++i)
	{
		if (arr[i]>arr[i+1])
		{
			var=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=var;
		}
		else if (arr[i]<arr[i+1])
		{
			var=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=var;
			printf("stuff");
		}
	}
	}
	for (int j=0;j<8;++j){
		printf("%d\n",arr[j]);
	}
}