#include "sort_arrays.h"

/**
 * @brief Sorts an array of integers using the bubble sort
 * sorting algorithm. This does the operation in place,
 * meaning that the input array will be overwritten by this
 * function.
 *
 * @param unsorted[] The unsorted arrray.
 * @param size The size of the input array.
 */
void bubble_sort(int unsorted[], size_t size)
{
    int i, j;
    for (j = size; j > 0; j--)
    {
        for (i = 1; i < j; i++)
        {
            if (unsorted[i] < unsorted[i - 1])
            {
                int tmp = unsorted[i - 1];
                unsorted[i - 1] = unsorted[i];
                unsorted[i] = tmp;
            }
        }
    }
}

/**
 * @brief Generates an array of random numbers with a specified length
 * and range (inclusive).
 *
 * @param dest[] The destination array for the created random array.
 * @param min The minimum of the range for the random numbers.
 * @param max The maximum of the range for the random numbers.
 * @param size The size of the desired array.
 */
void generate_rand_array(int dest[], int min, int max, size_t size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        dest[i] = generate_rand_int(min, max);
    }
}

/**
 * @brief Generates a random number in the range of
 * min - max, inclusive. Note that this function does
 * not seed the random function, that must be done
 * elsewhere.
 *
 * @param min The minimum of the random range.
 * @param max The maximum of the random range.
 *
 * @return The generated random number.
 */
int generate_rand_int(int min, int max)
{
    return (rand() % (max + 1 - min)) + min;
}

