// write a programm to add, substract, multiply and divide two numbers using pointers
#include <stdio.h>
int main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", pa, pb);
    printf("\nAddition: %d", *pa + *pb);
    printf("\nSubstraction: %d", *pa - *pb);
    printf("\nMultiplication: %d", *pa * *pb);
    printf("\nDivision: %d", *pa / *pb);
    return 0;
}
