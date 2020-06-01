#include<stdio.h>

int main()
{
    int n,count=0;
    printf("Enter an integer\n");
    scanf("%d",&n);
    while ( n!=0)
    {
        n/=10;
        count++;
    }
    printf("The number of digits = %d",count);
    return 0;
}