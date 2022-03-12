#include <stdio.h>
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
int main()
{
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
    printf("\n");
    return 0;
}
