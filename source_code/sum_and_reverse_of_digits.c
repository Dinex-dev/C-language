#include <stdio.h>
int main()
{
	int a , sum, rev;
	rev=0;
	sum=0;
	printf("This number prints the reverse and sum of digits in a given number\n");
	printf("Input a number : ");
	scanf("%d",&a);	
	while(a!=0){
		sum+=a%10;
		rev=(rev+(a%10))*10;
		a/=10;
	}
	printf("sum of the digits of number is : %d",sum);
	printf("\nnumber in reverse is : %d",rev/10);
}