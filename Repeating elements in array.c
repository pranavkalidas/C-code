#include <stdio.h>
int main()
{
    int i,j,n,arr[20];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The repeating elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               printf("%d\t",arr[i]);
            }
        }
    }
    return 0;
}