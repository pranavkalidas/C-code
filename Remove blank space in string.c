#include <stdio.h>

int main ()
{
    char line[100],blank[100];
    int i, d=0;
    
    printf("Enter the string :\n");
    fgets(line, sizeof(line), stdin);
    
    for (i=0; line[i]!='\0' ; i++)
        if(line[i]!=' ')
        {
            blank[d]=line[i];
            d++;
        }
    printf("The string without blank space is %s",blank);    
       
    return 0;
}