#include <stdio.h>

#define MAX_REQUESTS 20

int requestQueue[MAX_REQUESTS];
int currentHeadPosition;
int totalHeadMovements;

void initialize() {
  // Initialize the request queue with some values
  requestQueue[0] = 98;
  requestQueue[1] = 183;
  requestQueue[2] = 37;
  requestQueue[3] = 122;
  requestQueue[4] = 14;
  requestQueue[5] = 124;
  requestQueue[6] = 65;
  requestQueue[7] = 67;

  // Set the current head position and total head movements to 0
  currentHeadPosition = 53;
  totalHeadMovements = 0;
}

void fcfs() {
  // Iterate over the request queue and calculate the total head movement
  for (int i = 0; i < MAX_REQUESTS; i++) {
    totalHeadMovements += abs(requestQueue[i] - currentHeadPosition);
    currentHeadPosition = requestQueue[i];
  }
}

int main() {
  initialize();
  fcfs();

  printf("Total head movements: %d\n", totalHeadMovements);

  return 0;
}

/*

#include <stdio.h>

#define MAX_REQUESTS 20

int requestQueue[MAX_REQUESTS];
int currentHeadPosition;
int totalHeadMovements;

void initialize() {
  // Initialize the request queue with some values
  requestQueue[0] = 98;
  requestQueue[1] = 183;
  requestQueue[2] = 37;
  requestQueue[3] = 122;
  requestQueue[4] = 14;
  requestQueue[5] = 124;
  requestQueue[6] = 65;
  requestQueue[7] = 67;

  // Set the current head position and total head movements to 0
  currentHeadPosition = 53;
  totalHeadMovements = 0;
}

void fcfs() {
  // Iterate over the request queue and calculate the total head movement
  for (int i = 0; i < MAX_REQUESTS; i++) {
    totalHeadMovements += abs(requestQueue[i] - currentHeadPosition);
    currentHeadPosition = requestQueue[i];
  }
}

int main() {
  initialize();
  fcfs();

  printf("Total head movements: %d\n", totalHeadMovements);

  return 0;
}

*/
