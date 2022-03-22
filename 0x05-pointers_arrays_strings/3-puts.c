#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int will be changed
 *
 * Return: void which means correct
 */
void _puts(char *str)
{
	char *a;
	int n;

	a = str;

	for(n = 0; a[n]; n++);

	{
		_putchar(a[n]);
	}
	_putchar('\n');
}
