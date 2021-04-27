/**
 * to print results you need to compile like this:
 * gcc matrix_multiplication_1.c -D PRINT
 *
 * For time testing do not pass -D option.
 *
 * TODO: realize multiply_matrices function
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * For multiplication tests, you can leave it 3.
 * For time testing, you need to set this to 1000.
 */
const int MATRIX_SIZE = 3;

void init_matrix(int **matrix, int size);
void print_matrix(const int **matrix, int size);
void multiply_matrices(const int **A, const int **B, int **C);

int main()
{
    int **A = (int **) calloc(MATRIX_SIZE, sizeof(int *));
    int **B = (int **) calloc(MATRIX_SIZE, sizeof(int *));
    int **C = (int **) calloc(MATRIX_SIZE, sizeof(int *));

    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        A[i] = (int *)calloc(MATRIX_SIZE, sizeof(int));
        B[i] = (int *)calloc(MATRIX_SIZE, sizeof(int));
        C[i] = (int *)calloc(MATRIX_SIZE, sizeof(int));
    }

    init_matrix(A, MATRIX_SIZE);
    init_matrix(B, MATRIX_SIZE);

    multiply_matrices((const int **) A, (const int **) B, C);

#ifdef PRINT
	printf("matrix A\n");
    print_matrix(A, MATRIX_SIZE);

	printf("\nmatrix B\n");
    print_matrix(B, MATRIX_SIZE);
	
	printf("\nthe result of multiplying\n");
    print_matrix(C, MATRIX_SIZE);
#endif

	return 0;
}

void init_matrix(int **matrix, int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
}

void print_matrix(const int **matrix, int size)
{
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrices(const int **A, const int **B, int **C)
{
    // TODO: complete this function
}
