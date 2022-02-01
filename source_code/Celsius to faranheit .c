#include <stdio.h>
int main()
{
	float c,f;
	printf("Celsius to faranheit converter\n");
	printf("enter the temperature in Celsius:");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("temperature in Fahrenheit is %f",f);
}
