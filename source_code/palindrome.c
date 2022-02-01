#include <stdio.h>
int main()
{
	int a,rev=0,slice,nice;
	printf("This programme checks if a number is a palindrome \n");
	printf("Enter a number : ");
	scanf("%d",&a);
	nice=a;
	while(a!=0){
		slice=a%10;
		rev+=slice;
		rev*=10;
		a/=10;
	}
	if (rev==nice*10)
	{
		printf("This number is a palindrome");
	}
	else{
		printf("This number is not a palindrome");
	}
	return 0;
}