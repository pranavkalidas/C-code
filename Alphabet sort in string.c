#include <stdio.h>
#include <string.h>

int main ()
{
    char line[100],temp;
    int i, j;
    
    printf("Enter the string :\n");
    fgets(line, sizeof(line), stdin);
    
    int n = strlen(line);
    for (i = 0; i < n-1; i++) 
        for (j = i+1; j < n; j++) 
            if (line[i] > line[j]) 
            {
                temp = line[i];
                line[i] = line[j];
                line[j] = temp;
            }

    printf("The sorted string is : %s", line);
    return 0;
}