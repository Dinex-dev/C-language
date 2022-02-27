#include <stdio.h>
int armstrong(int end);
int prime(int num);
int reverse(int num);
int main()
{
    int num,func;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("What do you want to do with this Number ? \n[1] Print Armstrong Number.\n[2] Print Prime numbers.\n[3] Print Reverse of the number\nEnter a value : ");
    scanf("%d",&func);
   
    switch (func)
    {
    case 1:
        armstrong(num);
        break;
    case 2 :
        prime(num);
        break;
    case 3:
        reverse(num);
        break;
    default:
        printf("wrong Operator");
        break;
    }
    return 0;
}
int armstrong(int end){
    
    for (int num = 0; num <= end; num++) 
    {
    int len=0,temp1=num;
    while (temp1)
    {
        temp1/=10;
        len++;
    }
    int temp=num,sum=0;
    while (temp)
    {
        int sqr=1;
        for (int i = 0; i < len; i++)
        {
            sqr*=temp%10; 
        }
        sum+=sqr;
        temp/=10;
    }
    if (sum==num)
    {
        printf("%d\t",sum);
    }
    }
    return 0;
}
int prime(int num){
    for(int i=1;i<=num;i++){
        int isprime=1;
        for(int j=2;j<i;j++){
            if (i%j==0)
            {
                isprime=0;
            }
            }
            if (isprime)
            {
                printf("%d\t",i);
            }
        }
    return 0;
}
int reverse(int num){
    while (num)
    {
        printf("%d",num%10);
        num/=10;
    }
    return 0;
}