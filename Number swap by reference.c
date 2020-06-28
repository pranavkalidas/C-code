#include <stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the values of A and B\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    return 0;
}

swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The swapped values are:\n A = %d\n B = %d ",*a,*b);
}