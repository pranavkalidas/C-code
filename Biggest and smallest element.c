#include <stdio.h>
int main()
{
    int arr[20],big,i,small,n;
    printf("Enter the number of elements in array:\t");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    big=arr[0];
    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>big)
            big=arr[i];
        if(arr[i]<small)
            small=arr[i];
    }
    printf("The biggest element is %d and smallest element is %d",big,small);
    return 0;
}