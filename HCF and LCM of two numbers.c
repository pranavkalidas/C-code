#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2,lcm,res;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    res = hcf(num1,num2);
    lcm = (num1*num2)/res;
    printf("The HCF is %d and LCM is %d\n",res,lcm);
    return 0;
}

int hcf(int x, int y)
{
    int rem;
    rem = x%y;
    if(rem==0)
        return y;
    else
        return (hcf(y,rem));
}