#include <stdio.h>

int main() {
  int queue[100], head, max, seek_time = 0, i, j;

  // Read the max range, initial head position, and the number of upcoming requests.
  printf("Enter the max range of the disk: ");
  scanf("%d", &max);
  printf("Enter the initial head position: ");
  scanf("%d", &head);
  printf("Enter the number of requests: ");
  scanf("%d", &n);

  // Read each incoming request.
  for (i = 0; i < n; i++) {
    printf("Enter request %d: ", i + 1);
    scanf("%d", &queue[i]);
  }

  // Sort the requests in ascending order.
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (queue[i] > queue[j]) {
        int temp = queue[i];
        queue[i] = queue[j];
        queue[j] = temp;
      }
    }
  }

  // Calculate the seek time.
  for (i = 0; i < n; i++) {
    seek_time += abs(queue[i] - head);
    head = queue[i];
  }

  // Print the seek time.
  printf("Total seek time: %d\n", seek_time);

  return 0;
}																		
