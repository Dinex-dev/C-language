//matrix multiplication
#include <stdio.h>
void sep(){
    printf("\n------------------------------------------------------------------------------------\n");
}
int main()
{
    int len;
    sep();
    printf("Size of the square matrix : ");
    scanf("%d",&len);
    int a[len][len],b[len][len],c[len][len];
    for (int i = 0; i <len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            c[i][j]=0;
        }
        
    }
    
    sep();
    for(int i=1;i<=2;i++){
        printf("Enter the elements of matrix %d : \n",i);
        if(i==1){
            for(int i=0;i<len;i++){
                for(int j=0;j<len;j++){
                    printf("Enter element %d %d : ",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
        }
        else{
            for(int i=0;i<len;i++){
                for(int j=0;j<len;j++){
                    printf("Enter element %d %d : ",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }
        }
    }
    sep();
    for (int i=0;i<len;i++ ){
        for (int j = 0; j < len; j++)
        {
            for(int k=0;k<len;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        printf("{");
        for (int j = 0; j < len; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("}\n");
       
    }
    
    return 0;
}
