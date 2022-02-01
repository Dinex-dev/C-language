#include <stdio.h>
void add();
int main() {
	int n;
	printf("how many numbers do you want to add : ");
	scanf("%d",&n);
	add(n);
	return 0;
}

void add(int n)
{
	int sol=0;
	for (int i = 1; i <= n; ++i)
	{
		int num=0;
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		sol+=num;

	}
	printf("%d",sol);
}