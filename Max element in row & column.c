#include <stdio.h>
int main()
{
    int rows,cols,a[100][100],i,j,big=0;
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
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            if(big<a[i][j])
                big=a[i][j];
        printf("The maximum element in row %d is: %d\n",i+1,big);
        big=0;
    }printf("\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
            if(big<a[j][i])
                big=a[j][i];
        printf("The maximum element in column %d is: %d\n",i+1,big);
        big=0;
    }
    return 0;
}