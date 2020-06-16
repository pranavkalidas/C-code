#include <stdio.h>
int main()
{
    int a[20][20],i,j,rows,cols,pdsum=0,sdsum=0;
    printf("Enter the rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    /*Sum of primary diagnol*/
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            if(i==j)
                pdsum=pdsum+a[i][j];
    printf("The primary diagnol sum is: %d\n",pdsum);
    i=0;
    for(j=cols-1;j>=0;j--)
    {
        sdsum=sdsum+a[i][j];
        i++;
    }
    printf("The secondary diagnol sum is: %d\n",sdsum);
    return 0;
}