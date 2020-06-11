#include <stdio.h>
int main()
{
    int rows,cols,a[20][20],b[20][20],sum[20][20],i,j,dif[20][20];
    printf("Enter the number of rows and columns:\n");
        scanf("%d%d",&rows,&cols);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Matrix addition is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("Matrix subtraction is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            dif[i][j]=a[i][j]-b[i][j];
            printf("%d\t",dif[i][j]);
        }
        printf("\n");
    }
    return 0;
}