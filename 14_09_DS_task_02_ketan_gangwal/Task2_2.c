#include <stdio.h>
#include <stdlib.h>       // This Library is required for using Malloc and Realloc

int main()
{
    int *ptr;           
    int n, i;
    printf("Enter the size of n:\n");      
    scanf("%d", &n);                                 // Taking input of 'n' from the user which we will require afterwards

    ptr = (int *)malloc(n * sizeof(int));            // Memory Allocation using Malloc
    printf("Enter the elements:\n");
    for (i = 0; i < n; i = i + 1)                   
    {
        scanf("%d", &ptr[i]);
    }
    printf("\nElements are : ");
    for (i = 0; i < n; i = i + 1)                    // Started a for loop for Displaying the Elements entered by the user
    {
        printf("%d", ptr[i]);
    }

    int *ptr2;
    printf("\nEnter the size of n:\n");
    scanf("%d", &n);                                 // Taking input of 'n' from the user which we will require afterwards

    ptr2 = (int *)realloc(ptr, n * sizeof(int));     // Memory Allocation using Realloc
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i = i + 1)                  
    {
        scanf("%d", &ptr2[i]);
    }

    printf("Elements are :\n");    
    for (i = 0; i < n; i = i + 1)                    // Started a for loop for Displaying the Elements entered by the user
    {
        printf("%d", ptr2[i]);
    }
    return 0;
}

