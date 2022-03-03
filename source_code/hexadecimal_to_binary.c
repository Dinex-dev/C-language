#include <stdio.h>
int main(){
	int a, arr[20];
	for (int i = 0; i < 20; ++i)
	{
		arr[i]=0;
	}
	printf("Enter Hexadecimal number :");
	scanf("%x",&a);
	for (int i = 0;a; ++i)
	{
		arr[i]=a%2;
		a/=2;
	}
	int count=0;
	printf("Number in binary is : ");
	for (int i = 19; i>=0 ; --i)
	{
		if (count==1)
		printf("%d",arr[i]);
		if(arr[i-1]==1)
		count=1;
	}
	printf("\n");
	return 0;
}