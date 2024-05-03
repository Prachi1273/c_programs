#include <stdio.h>

// Function to calculate the total head movement
int calculate_total_head_movement(int arr[], int size, int head)
{
    int total_head_movement = 0;
    int i;

    // Calculate the head movement for each request
    for (i = 0; i < size; i++)
    {
        total_head_movement += abs(arr[i] - head);
        head = arr[i];
    }

    // Return the total head movement
    return total_head_movement;
}

// Function to implement the C-SCAN disk scheduling algorithm
void cscan(int arr[], int size, int head)
{
    // Sort the requests in ascending order
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculate the total head movement
    int total_head_movement = calculate_total_head_movement(arr, size, head);

    // Print the total head movement
    printf("Total head movement: %d\n", total_head_movement);
}

// Main function
int main()
{
    // Initialize the array of requests
    int arr[] = {98, 183, 37, 122, 14, 124, 65, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize the head position
    int head = 53;

    // Implement the C-SCAN disk scheduling algorithm
    cscan(arr, size, head);

    return 0;
}
