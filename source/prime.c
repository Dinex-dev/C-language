#include<stdio.h>
int main(){
	int n,i,prime=0;
	printf("Enter the number to check prime : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				printf("Number is not prime");	
				prime=1;
				break;
			}
		}
	if(prime==0){
		printf("Number is prime");
	}
	return 0;
}