#include<stdio.h>
int main(){
	int a,b,c,big;
	printf("This programme gives gives greates of three numbers\n\n");
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	big=(a>b&&a>c?a:(b>c?b:c));
	printf("\nThe biggest number is:%d",big);
	return 0;
}
