#include <stdio.h>
int main()
{
    int rows,cols,a[20][20],sum_row,i,j,sum_col;
    printf("Enter the number of rows and columns:\n");
        scanf("%d%d",&rows,&cols);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<rows;i++)
    {
        sum_row=0;
        for(j=0;j<cols;j++)
            sum_row=a[i][j]+sum_row;
        printf("Row sum for row %d is: %d\n",i+1,sum_row);
    }
    for(i=0;i<cols;i++)
    {
        sum_col=0;
        for(j=0;j<rows;j++)
            sum_col=a[j][i]+sum_col;
        printf("The column sum for column %d is: %d\n",i+1,sum_col); 
    }
    return 0;
}