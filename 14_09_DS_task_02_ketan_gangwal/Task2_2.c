#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    printf("Enter the size of n:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\nElements are : ");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d", ptr[i]);
    }

    int *ptr2;
    printf("\nEnter the size of n:\n");
    scanf("%d", &n);

    ptr2 = (int *)realloc(ptr, n * sizeof(int));
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &ptr2[i]);
    }

    printf("Elements are :\n");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d", ptr2[i]);
    }
    return 0;
}
