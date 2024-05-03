#include <stdio.h>
#include <stdlib.h>

// Structure to store a disk request
struct request {
  int track;
  int direction; // 0 for left, 1 for right
};

// Function to sort the requests in ascending order of track number
void sort_requests(struct request *requests, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (requests[j].track > requests[j + 1].track) {
        struct request temp = requests[j];
        requests[j] = requests[j + 1];
        requests[j + 1] = temp;
      }
    }
  }
}

// Function to calculate the total seek time
int calculate_seek_time(struct request *requests, int n, int current_head) {
  int seek_time = 0;
  for (int i = 0; i < n; i++) {
    seek_time += abs(requests[i].track - current_head);
    current_head = requests[i].track;
  }
  return seek_time;
}

// Function to implement the LOOK disk scheduling algorithm
int look_disk_scheduling(struct request *requests, int n, int current_head) {
  // Sort the requests in ascending order of track number
  sort_requests(requests, n);

  // Calculate the total seek time
  int seek_time = calculate_seek_time(requests, n, current_head);

  return seek_time;
}

// Main function
int main() {
  // Create an array of disk requests
  struct request requests[] = {{53, 1}, {98, 1}, {183, 1}, {37, 1}, {122, 1}, {14, 1}, {124, 1}, {65, 1}, {67, 1}};

  // Get the number of requests
  int n = sizeof(requests) / sizeof(requests[0]);

  // Get the current head position
  int current_head = 53;

  // Calculate the total seek time
  int seek_time = look_disk_scheduling(requests, n, current_head);

  // Print the total seek time
  printf("Total seek time: %d\n", seek_time);

  return 0;
}
