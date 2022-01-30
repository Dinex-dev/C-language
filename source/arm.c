#include <stdio.h> 
int main()
{
	int a=1,slice=0,b,count=0,j,power=1,arm;
	printf("Programme to find armstrong number till n(given number) \nenter n : ");
	scanf("%d",&a);

	for (int i = 1; i < a; ++i)
	{
		arm=0;
		count=0;
		b=i;
		
		while(b!=0)
		{
			b/=10;
			count++;
		}

		j=i;
		while(j!=0)
		{
		slice=j%10;
		j/=10;
		power=1;
		for (int k = 1; k <= count; ++k)
		{
			power*=slice;
		}
		arm+=power;
		}
		
		if (arm==i)
		{
			printf("%d is an armstrong number\n",arm);
		}


	}
	return 0;
}