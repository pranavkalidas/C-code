#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num, fact(num));
    return 0;
}
int fact(int n)
{
    if(n<2)
        return 1;
    return (n * fact(n-1));
}