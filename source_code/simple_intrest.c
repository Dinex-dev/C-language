#include <stdio.h>
int main()
{
    int p, t, r, i;
    printf("Enter Principle (amount): ");
    scanf("%d", &p);
    printf("Enter Time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%d", &r);
    i = (p * t * r)/100;
    printf("Simple Interest = %d", i);
    return 0;
}
