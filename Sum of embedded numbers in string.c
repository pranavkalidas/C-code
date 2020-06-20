#include <stdio.h>
int main() 
{
    int count=0;
    char line[100],sum=0;

    printf("Enter a line of string:\n");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i]>='0' && line[i]<='9')
            sum = sum + line[i]-'0';
    }
    
    printf("Sum of embedded numbers in a string: %d",sum);
    
    return 0;
}