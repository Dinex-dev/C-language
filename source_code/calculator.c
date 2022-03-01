// programme to take input from user and perform basic operations
#include <stdio.h>
#include <stdlib.h>
int getno();
int main()
{
    float a,b;
    int num=0,sum=0,p=0;
    char c;
    while (c!='e')
    {
    printf("\n------------------------------------------------------------------------------------\n");
    printf("\nEnter the operator \n(+) for addition \n(-) for substraction\n(*) for Multiplication\n(/) for division\n(a) for average\n(p) for percentage\npress e to exit : \n");
    scanf(" %c",&c);
    printf("\n------------------------------------------------------------------------------------\n");
    if (c=='e')
    exit(0);
    switch (c)
    {
    case '+':
        getno(&a,&b);
        printf("%f + %f = %f",a,b,a+b);
        break;
    case '-':
        getno(&a,&b);
        printf("%f - %f = %f",a,b,a-b);
        break;
    case '*':
        getno(&a,&b);
        printf("%f * %f = %f",a,b,a*b);
        break;
    case '/':
        getno(&a,&b);
        printf("%f / %f = %f",a,b,a/b);
        break;
    case 'a':
        printf("How many numbers do you want to take average of : " );
        scanf("%d",&num);
        for (int i;i<num;i++){
            printf("enter %d number :",i+1);
            scanf("%d",&p);
            sum+=p;
        }
        printf("Average of the given numbers is : %d",sum/num);
        break;
    case 'p':
        printf("How much percentage : ");
        scanf("%f",&a);
        printf("Percentage of which number : ");
        scanf("%f",&b);
        printf("%f %% of %f is : %f",a,b,a/100*b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    }
    return 0;
}
int getno(int *p,int *q){
    printf("Enter the first number : \n");
    scanf("%f",p);
    printf("Enter the second number : \n");
    scanf("%f",q);
}