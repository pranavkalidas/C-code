#include <stdio.h>

int main()
{
    int rem,temp,rev=0,n;
    
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    temp=n;
    while(temp!=0)
    {
        rem =temp %10;
        rev =rev*10 + rem;
        temp =temp/10;
    }
    printf("The reverse of %d is %d\n",n,rev);
    if(rev==n)
        printf("Given number is a palindrome\n");
    else
        printf("Given number is not a palindrome\n");
    return 0;
}