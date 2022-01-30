#include <stdio.h>
int main()
{
	int a,rev,len,slice,spare,nice,count;
	spare=0;
	count=0;
	printf("This programme prints the reverse of a number \n");
	printf("Enter a number : ");
	scanf("%d",&a);
	nice=a;
	while(a!=0){
		slice=a%10;
		rev+=slice;
		rev*=10;
		a/=10;
	}
	printf("%d",rev/10);
}