#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    
    printf("Enter the two strings\n");
    gets(str1);
    gets(str2);
    
    for(int i=0; str1[i]!='\0';i++)
        if(str1[i]!=str2[i])
        {
            printf("Strings are different");
            return 0;
        }
    
    printf("The strings are same");
    
    return 0;
}