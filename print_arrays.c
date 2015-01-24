/** file print_arrays.c
 * @author Mike Ciaraldi
 *
 * Functions for printing arrays.
 */

#include <stdio.h>
#include "print_arrays.h"

/** Print an array of ints, one per line.
    @param a Array to print
    @param num_elements Number of elements in the array
*/

void print_int_array(int a[], int num_elements) {
  int i; // Loop counter

  for (i = 0; i < num_elements; i++) {
    printf("%d\n", a[i]);
  }
}

void print_double_array(double a[], int num_elements) {
	// TODO: Fill in with code.
}

