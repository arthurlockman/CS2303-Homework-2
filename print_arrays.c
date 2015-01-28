/** file print_arrays.c
 * @author Mike Ciaraldi
 *
 * Functions for printing arrays.
 */

#include "print_arrays.h"

/** Print an array of ints, one per line.
    @param a Array to print
    @param num_elements Number of elements in the array
*/
void print_int_array(int a[], int num_elements)
{
    int i; // Loop counter

    for (i = 0; i < num_elements; i++)
    {
        printf("%d\n", a[i]);
    }
}

/**
 * @brief Prints an array of doubles, one per line.
 *
 * @param a[] The array to print.
 * @param num_elements The number of elements in a[].
 */
void print_double_array(double a[], int num_elements)
{
    int i;
    for (i = 0; i < num_elements; i++)
    {
        printf("%f\n", a[i]);
    }
}

/**
 * @brief Ingests an array of integers from the command line. It takes
 * in an array from argv and ingests it into an input array.
 *
 * @param args[] The array created in argv in the main loop.
 * @param size The size of the input array.
 * @param dest[] The array to put the new values in.
 *
 * @return 0 if successful, 1 if out of bounds.
 */
int ingest_array(const char* args[], size_t size, int dest[])
{
    int i;
    for (i = 1; i <= size; i++)
    {
        dest[i - 1] = atoi(args[i]);
    }
    return 0;
}

