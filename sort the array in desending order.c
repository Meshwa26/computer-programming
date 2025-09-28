#include <stdio.h>

int main()
{
    // Declare an array of size 5 and initialize it with values.
    //int arr[5] = {10, 5, 20, 15, 25};
    int arr[5];
    int i, j, temp;
    int size = 5;

    printf("enter the 5 numbers \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    // Print the original array
    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Use a nested loop to perform a bubble sort in descending order.
    // The outer loop iterates through the entire array.
    for (i = 0; i < size - 1; i++)
    {
        // The inner loop compares adjacent elements and swaps them
        // if they are in the wrong order (i.e., the first element is
        // smaller than the second).
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array in descending order: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

