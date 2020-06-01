#include<stdio.h>

int main()
{
    int n,rem,sum=0,temp;
    printf("Enter the number/n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("The sum of digits is %d/n",sum);
    return 0;
}