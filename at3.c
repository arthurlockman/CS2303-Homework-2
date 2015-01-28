#include "print_arrays.h"
#include "sort_arrays.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * @brief Main function for at3. Creates an array of pseudo-random
 * integers in a specified range and prints them. The set range 
 * is -10 to 100 inclusive, and it generates an array of them 
 * that contains 30 values.
 * 
 * @return 0 if success, 1 if failure. 
 */
int main(void)
{
    srand((int)time(0));
    int test[20];
    generate_rand_array(test, -10, 100, 20);
    print_int_array(test, 20);
    return 0;
}

