#include <stdio.h>
int main() {
    int data[100],n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);

    printf("Elememts of array are: \n");
    for (int i = 0; i < n; ++i)
        printf("%d\t", *(data + i));
    return 0;
}