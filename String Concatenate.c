#include <stdio.h>

int main()
{
    int i=0,j;
    char str1[100],str2[100];
    
    printf("Enter the two strings\n");
    gets(str1);
    gets(str2);
    
    while(str1[i]!='\0')
        i++;
    
    for(j=0; str2[j]!='\0';j++,i++)
        str1[i]=str2[j];
        
    printf("Concatenatd string is: %s",str1);
    return 0;
}