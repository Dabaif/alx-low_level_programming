#include "main.h"

/**
 * swap_int - functions that swap the value of two integers.
 *
 * @a: number 1.
 *
 * @b: number 2.
 *
 * Return: 0.
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
