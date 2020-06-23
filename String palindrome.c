#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];
    int length,flag=0;
    
    printf("Enter the string:\n");
    fgets(line, sizeof(line), stdin);
    
    length=strlen(line);
    
    for(int i=0;line[i]!='\0'; i++)
    {
        if(line[i]==line[length-i-1])
            flag++;
        else
        {
            printf("String is not a palindrome");
            break;
        }    
    }
    
    if(flag!=0)
        printf("String is a palindrome");
    
    return 0;
}