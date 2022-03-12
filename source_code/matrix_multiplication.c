// matrix multiplication
#include <stdio.h>
void sep()
{
    printf("\n-------------------------------------------------\n");
}
void printm(int *b, int len)
{
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++)
        printf("%d ", b[i * len + j]);
        printf("\n");
    }
}
void matrix_multiplication(int *a, int *b, int *c, int len)
{
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            for (int k = 0; k < len; k++)
                c[i*len+j] += a[i*len+k]*b[k*len+j];
}
int main()
{
    int len;
    sep();
    printf("Size of the square matrix : ");
    scanf("%d", &len);
    int a[len][len], b[len][len], c[len][len];
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            c[i][j] = 0;
    sep();
    printf("Enter the elements of the first matrix : \n");
            for (int i = 0; i < len; i++)
                for (int j = 0; j < len; j++)
                {
                    printf("Enter element %d %d : ", i + 1, j + 1);
                    scanf("%d", &a[i][j]);
                }
    sep();
    printf("Enter the elements of the second matrix : \n");
            for (int i = 0; i < len; i++)
                for (int j = 0; j < len; j++)
                {
                    printf("Enter element %d %d : ", i + 1, j + 1);
                    scanf("%d", &b[i][j]);
                }
    sep();
    matrix_multiplication(*a, *b, *c, len);
    printm(c[0], len);
    return 0;
}
