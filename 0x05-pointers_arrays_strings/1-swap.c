#include "main.h"
/**
 * swap_int - swaps the values of two intergers.
  * @a: The first interger to be swapped.
  * @b: The second interger to be swapped.
  *
  * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

