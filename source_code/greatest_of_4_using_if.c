#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf("This programme finds greatest of 4 numbers using if/else conditions\n\n");
	printf("Enter A ");
	scanf("%d",&a);
	printf("Enter B ");
	scanf("%d",&b);
	printf("Enter C ");
	scanf("%d",&c);
	printf("Enter D ");
	scanf("%d",&d);
	
	if (a>b&&a>c&&a>d)
	{
		printf("%d is greatest",a);
	}
	else {
			if (b>a&&b>c&&b>d)
			{
				printf("%d is greatest ",b);
			}
			else {
				
				if (c>b&&c>a&&c>d)
				
				{
					printf("%d is greatest",c);
				}
				else
				{
					printf("%d is greatest",d);
				}
			}
		}

	}