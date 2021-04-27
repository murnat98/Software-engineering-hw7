#include <stdio.h>

void bubble_sort(int array[], int size);
void print_array(int array[], int size);

int main()
{
    int array[100] = {};

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    bubble_sort(array, n);

    printf("Sorted list in ascending order:\n");
    print_array(array, n);

  return 0;
}

/**
 * Bubble sort the given array.
 */
void bubble_sort(int array[], int size)
{
    // TODO: implement this function.
}

/**
 * Print the given array.
 */
void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d\n", array[i]);
    }
}
