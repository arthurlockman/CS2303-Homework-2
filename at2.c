#include "print_arrays.h"
#include <stdlib.h>
#include <stdio.h>

int ingest_array(const char* args[], size_t size, int dest[]);

/** Main program for demonstrating arrays. It fills them and prints them.
 * @return 0, Indicating success.
 */
int main(int argc, const char* argv[])
{
    int i; // Loop counter
    int a[argc - 1]; 
    
    // Fill the array with consecutive integers
    for (i = 0; i < argc - 1; i++) a[i] = atoi(argv[i + 1]);

    // Now print it out
    print_int_array(a, argc - 1);
    
    int b[argc - 1];
    ingest_array(argv, argc - 1, b); 
    print_int_array(b, argc - 1);

    return 0; // Success!
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
        dest[i-1] = atoi(args[i]);
    }
    return 0;
}
