#include <stdio.h>
int main()
{
    int n,i,arr[20],sum=0,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        temp=temp*temp;
        sum=sum+temp;
    }
    printf("The sum of positive square elements in array is: %d",sum);
    return 0;
}