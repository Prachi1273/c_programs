#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define ARRAY_SIZE 1000

int main(int argc, char** argv) {
    int rank, size;
    int i;
    int local_sum = 0;
    int global_sum = 0;
    int array[ARRAY_SIZE];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Initialize random seed
    srand(rank);

    // Generate random numbers for the array
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % 100;
    }

    // Calculate local sum
    for (i = 0; i < ARRAY_SIZE; i++) {
        local_sum += array[i];
    }

    // Reduce local sums to calculate global sum
    MPI_Reduce(&local_sum, &global_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    // Print result from rank 0
    if (rank == 0) {
        printf("Sum of %d numbers: %d\n", ARRAY_SIZE * size, global_sum);
    }

    MPI_Finalize();
    return 0;
}

