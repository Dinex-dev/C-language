// check if a string is palindrome or not
#include <stdio.h>
int main()
{
    char str[100];
    int i,j,len;
    printf("Enter a string : ");
    scanf("%s",str);
    len=strlen(str);
    for (i = 0, j = len-1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("This string is not a palindrome");
            return 0;
        }
    }
    printf("This string is a palindrome");
    
    return 0;
}
