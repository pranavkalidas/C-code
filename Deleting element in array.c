#include<stdio.h>

int main()
{
    int arr[20],c,pos,n;
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(c=0;c<n;c++)
        scanf("%d",&arr[c]);
    printf("Enter the element position to be deleted:\t");
    scanf("%d",&pos);
    for(c=pos-1;c<n-1;c++)
        arr[c]=arr[c+1];
    n--;
    printf("The new array is:\n");
    for(c=0;c<n;c++)
        printf("%d\t",arr[c]);
    return 0;
}