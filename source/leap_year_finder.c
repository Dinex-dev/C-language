#include <stdio.h>
void check();
int main()
{
	int year;
	printf("Enter a Year : ");
	scanf("%d",&year);
	check(year);
	return 0;
}


void check(int year){
	if (year%4==0){
		if (year%100==0&&year%400==0){
			printf("%d a leap year",year);
		}
		else if (year%100!=0){
			printf("%d a leap year",year);
		}
	}
	else{
		printf("%d not a leap year",year);
	}
}