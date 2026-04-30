#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i, n;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    // Memory allocation using calloc
    ptr = (int *)calloc(n, sizeof(int));

    // Check if memory is allocated or not
    if (ptr == NULL)
    {
        printf("Error! Memory not allocated.\n");
        exit(1);
    }

    // Taking input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    // Printing elements
    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    // Free allocated memory
    free(ptr);

    return 0;
}
