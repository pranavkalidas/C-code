#include <stdio.h>
int fib(int);
int main()
{
    int n,x;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Fibonacci series is:\n");
    for(int i=0;i<n;i++)
    {
        x=fib(i);
        printf("%d\t",x);
    }
    return 0;
}
int fib(int n)
{
    if(n<=1)
        return n;
    return (fib(n-1)+fib(n-2));
}