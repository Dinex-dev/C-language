#include <stdio.h>
void sep();
void printm(int *b, int len);
void matrix_tranpose(int *a,int *b,int len);
void matrix_multiplication(int *a, int *b, int *c, int len);
void matrixm();
void matrixt();
int main()
{
    int op;
    printf("\n [0] Matrix multiplication\n [1] Matrix transpose\n Enter your choice : ");
    scanf("%d",&op);
    switch (op)
    {
    case 0:
        matrixm();
        break;
    case 1:
        matrixt();
        break;
    default:
        break;
    }
    
    return 0;
}
void matrixm(){
    printf("Matrix multiplication\n");
        int len;
        printf("Size of the square matrix : ");
        scanf("%d", &len);
        int a[len][len], b[len][len], c[len][len];
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                c[i][j] = 0;
        printf("Enter the elements of the first matrix : \n");
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
            {
                printf("Enter element %d %d : ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        printf("Enter the elements of the second matrix : \n");
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
            {
                printf("Enter element %d %d : ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        matrix_multiplication(*a, *b, *c, len);
        printm(c[0], len);
}
void matrixt(){
    printf("Matrix transpose\n");
    int len;
    printf("Size of the square matrix : ");
    scanf("%d", &len);
    int a[len][len], b[len][len];
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
        {
            printf("Enter element %d %d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    matrix_tranpose(*a,*b,len);
    printm(b[0], len);
}
void sep(){
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
void matrix_tranpose(int *a,int *b,int len){
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            b[i*len+j] = a[j*len+i];
}
void matrix_multiplication(int *a, int *b, int *c, int len)
{
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            for (int k = 0; k < len; k++)
                c[i*len+j] += a[i*len+k]*b[k*len+j];
}