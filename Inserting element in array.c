#include<stdio.h>

int main()
{
    int arr[20],c,pos,val,n;
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(c=0;c<n;c++)
        scanf("%d",&arr[c]);
    printf("Enter the element position: \t");
    scanf("%d",&pos); 
    printf("Enter the element value:\t");
    scanf("%d",&val);
    for(c=n-1;c>=pos-1;c--)
        arr[c+1]=arr[c];
    arr[pos-1]=val;
    n++;
    printf("The new array is:\n",arr);
    for(c=0;c<n;c++)
        printf("%d\t",arr[c]);
    return 0;
}