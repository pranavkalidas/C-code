#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char str1[100],str2[100];
    
    printf("Enter the two strings\n");
    gets(str1);
    gets(str2);
    
    i=strlen(str1);
    
    for(j=0; str2[j]!='\0';j++,i++)
        str1[i]=str2[j];
        
    printf("Concatenatd string is: %s",str1);
    return 0;
}