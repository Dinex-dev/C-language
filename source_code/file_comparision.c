#include <stdio.h>
// write a programme to compare 2 files
int main()
{
    FILE *fp1, *fp2;
    int ch1, ch2;
    fp1 = fopen("file1", "r");
    fp2 = fopen("file2", "r");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error in opening file\n");
        return 1;
    }
    while ((ch1 = fgetc(fp1)) != EOF)
    {
        ch2 = fgetc(fp2);
        if (ch1 != ch2)
        {
            printf("Files are not same\n");
            return 0;
        }
    }
    printf("Files are same\n");
    
    return 0;
}
