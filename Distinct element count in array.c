#include <stdio.h>
int main()
{
    int i,j,n,rep,count,arr[i];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
                count++;
        }
        if(count==0)
            rep++;
    }
    printf("The no. of distinct elements : %d",rep);
    return 0;
}