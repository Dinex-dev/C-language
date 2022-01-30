#include <stdio.h>
void avg();
int main() {
	int n;
	printf("how many numbers do you want to take avg of : ");
	scanf("%d",&n);
	avg(n);
	return 0;
}

void avg(int n)
{
	int sol=0;
	for (int i = 1; i <= n; ++i)
	{
		int num=0;
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		sol+=num;

	}
	printf("%d",sol/n);
}