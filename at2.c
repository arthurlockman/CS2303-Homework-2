#include "print_arrays.h"
#include <stdlib.h>

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
    
    return 0; // Success!
}

