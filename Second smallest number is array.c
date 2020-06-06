#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[20],sec_small,i,small,n;
    printf("Enter the number of elements in array:\t");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    small=arr[0];
    sec_small=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<sec_small && arr[i]!=small)
            sec_small=arr[i];
    }
    printf("The second smallest element is %d",sec_small);
    return 0;
}