#include <stdio.h>
int main()
{
    int rows,cols,a[20][20],i,j;
    printf("Enter the number of rows and columns:\n");
        scanf("%d%d",&rows,&cols);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    printf("The matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("The transpose of matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%d\t",a[j][i]);
        printf("\n");
    }    
    return 0;
}