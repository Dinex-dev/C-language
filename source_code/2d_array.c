// save and print a 2d array
#include <stdio.h>
int main(){
    int rows , cols;
    printf("Enter the number of rows : \n");
    scanf("%d",&rows);
    printf("Enter the number of columns : \n");
    scanf("%d",&cols);
    int a[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}