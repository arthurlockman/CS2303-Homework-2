#include "sort_arrays.h"

void bubble_sort(int unsorted[], size_t size)
{
    int i, j;
    for (j = size; j > 0; j--)
    {
        for (i = 1; i <= j; i++)
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

