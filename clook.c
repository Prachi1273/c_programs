#include <stdio.h>
#include <stdlib.h>

// Structure to store a disk request
struct request {
  int request_number;
  int track_number;
};

// Function to sort the requests in ascending order of track numbers
void sort_requests(struct request *requests, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (requests[j].track_number > requests[j + 1].track_number) {
        struct request temp = requests[j];
        requests[j] = requests[j + 1];
        requests[j + 1] = temp;
      }
    }
  }
}

// Function to calculate the total head movement
int calculate_total_head_movement(struct request *requests, int n, int current_head_position) {
  int total_head_movement = 0;
  int previous_head_position = current_head_position;

  for (int i = 0; i < n; i++) {
    total_head_movement += abs(requests[i].track_number - previous_head_position);
    previous_head_position = requests[i].track_number;
  }

  return total_head_movement;
}

// Function to implement the C-LOOK algorithm
void c_look(struct request *requests, int n, int current_head_position) {
  // Sort the requests in ascending order of track numbers
  sort_requests(requests, n);

  // Calculate the total head movement
  int total_head_movement = calculate_total_head_movement(requests, n, current_head_position);

  // Print the total head movement
  printf("Total head movement: %d\n", total_head_movement);
}

// Main function
int main() {
  // Create an array of disk requests
  struct request requests[] = {{1, 5}, {2, 10}, {3, 15}, {4, 20}, {5, 25}};

  // Get the number of requests
  int n = sizeof(requests) / sizeof(requests[0]);

  // Get the current head position
  int current_head_position = 10;

  // Implement the C-LOOK algorithm
  c_look(requests, n, current_head_position);

  return 0;
}
