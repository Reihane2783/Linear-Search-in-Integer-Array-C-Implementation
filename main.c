#include <stdio.h>
#include <stdlib.h>

// Function prototype
int finder(int *p, int x);

// Global pointer and search target
int *p, x;

int main()
{
    int i, j, n, position;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("No array.\n");
    }
    else
    {
        // Allocate memory for the array
        p = (int *)malloc(n * sizeof(int));

        // Input array elements
        for (int i = 0; i < n; i++)
        {
            printf("Enter array element as an integer: ");
            scanf("%d", p + i);
        }

        // Display the array
        printf("The array A is:\n");
        for (int j = 0; j < n; j++)
            printf("%4d", *(p + j));

        // Input the target value
        printf("\nEnter the value to search for:\n");
        scanf("%d", &x);

        // Search for the value
        position = finder(p, x);

        if (position != 0)
            printf("Index = %d\n", (position - 1));
        else
            printf("Not found.\n");

        return 0;
    }
}

//*************

// Linear search function: returns position (1-based) if found, 0 otherwise
int finder(int *p, int x)
{
    int count = 0;

    for (count = 1; *p; count++)
    {
        if (*p++ == x)
            return count;
    }

    return 0;
}
