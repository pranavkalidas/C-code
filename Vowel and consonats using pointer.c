#include <stdio.h>
int main() {
    char line[100],*ptr;
    int vowels, consonant;
    
    vowels = consonant = 0;

    printf("Enter a line of string:\n");
    fgets(line,sizeof(line), stdin);
    ptr=line;
    while(*ptr !='\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' || *ptr == 'A' ||
            *ptr == 'E' || *ptr == 'I' || *ptr == 'O' ||
            *ptr== 'U')
            vowels++;
        else
            consonant++;
        ptr++;
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    return 0;
}