#include <stdio.h>
void Fibonacci(int);
int main()
{
    int num;
    printf("Enter the number of terms in series\n");
    scanf("%d",&num);
    printf("The Fibonacci series is:\n");
    Fibonacci(num);
    return 0;
}

void Fibonacci(int n)
{
    int i, t1 = 0, t2 = 1, nextTerm;
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}