#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of a array of intyegers
 * @a: A pointer to an int that will be changed
 * @n: return value n
 * Return: void which means correct
 */

void print_array(int *a, int n)

{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", a[b]);

		if (i < n - 1)
		{
			printf(", ");
		}

		b++;
	}

	printf('\n');
}
