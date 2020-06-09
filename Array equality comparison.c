#include <stdio.h>
int main()
{
    int i,n1,n2,a[20],b[20],temp=0;
    printf("Enter the number of elements for array 1 & 2:\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements of array 1:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter elements of array 2:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {   
        temp=0;
        if(a[i]==b[i] && n1==n2)
            temp++;
    }
    if(temp==0)
        printf("Arrays are not equal");
    else
        printf("Arrays are equal");
    return 0;
}