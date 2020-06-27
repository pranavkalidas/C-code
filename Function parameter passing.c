#include <stdio.h>
void ad(int *n);
void add(int n);
int main() 
{
    int num;
    
    printf("Enter a number to be multiplied with 2:\n\n");
    scanf("%d",&num);
    
    printf("By call by value method:\n");
    add(num);
    printf("Value of num after calling the fucntion is: %d\n\n",num);
    
    printf("By call by reference method\n");
    ad(&num);
    printf("Value of num after calling the function is: %d\n",num);
	return 0;
}

void add(int n)
{
    n=n * 2;
    printf("Value of num in called function is: %d\n",n);
}

void ad(int *n)
{
    *n=*n * 2;
    printf("Value of num in called function is: %d\n",*n);
}
