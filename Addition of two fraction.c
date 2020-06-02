#include<stdio.h>
int main()
{
    int n1,n2,d1,d2,num,den,gcd,i;
    printf("Enter the first fraction:\n");
    scanf("%d/%d",&n1,&d1);
    printf("Enter second fraction:\n");
    scanf("%d/%d",&n2,&d2);
    num=(n1*d2)+(n2*d1);
    den=(d1*d2);
    for(i=1;i<=num && i<=den;i++)
    {
        if(num%i==0 && den%i==0)
            gcd=i;
    }
    printf("The result is: %d / %d",num/gcd,den/gcd);
    return 0;
}