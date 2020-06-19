#include <stdio.h>
int main() 
{
    int count=0;
    char line[100],b[100],d=0;

    printf("Enter a line of string:\n");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] != 'a' && line[i] != 'e' && line[i] != 'i' &&
            line[i] != 'o' && line[i] != 'u' && line[i] != 'A' &&
            line[i] != 'E' && line[i] != 'I' && line[i] != 'O' &&
            line[i] != 'U')
        {
            b[d]=line[i];
            d++;
        }
    }
    b[d]='\0';
    printf("String without vowels: %s",b);
    return 0;
}