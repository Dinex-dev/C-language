// programme to take input from user and perform basic operations
#include <stdio.h>
int main()
{
    float a,b;
    char c;
    printf("Enter the first number : \n");
    scanf("%f",&a);
    printf("Enter the second number : \n");
    scanf("%f",&b);
    printf("Enter the operator (+,-,*,/,press e to exit) : \n");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("%f + %f = %f",a,b,a+b);
        break;
    case '-':
        printf("%f - %f = %f",a,b,a-b);
        break;
    case '*':
        printf("%f * %f = %f",a,b,a*b);
        break;
    case '/':
        printf("%f / %f = %f",a,b,a/b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}
