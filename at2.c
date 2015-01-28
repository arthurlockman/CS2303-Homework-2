#include "print_arrays.h"
#include "sort_arrays.h"
#include <stdlib.h>
#include <stdio.h>


/** 
 * @brief The main function of at2. It ingests an array of integers
 * of any size from the command line, prints them, then sorts them. 
 * It then prints the sorted array.
 * 
 * @param argc Count of arguments.
 * @param argv[] Program arguments
 * 
 * @return 0 if success, 1 if failure.
 */
int main(int argc, const char* argv[])
{
    if (argc < 2)
    {
        printf("You need to enter a number on the command line!\n");
        return 1;
    }

    int out[argc - 1];
    ingest_array(argv, argc - 1, out);
    printf("Unsorted array:\n");
    print_int_array(out, argc - 1);
    bubble_sort(out, argc-1);
    printf("Sorted array:\n");
    print_int_array(out, argc - 1);
    return 0; // Success!
}

