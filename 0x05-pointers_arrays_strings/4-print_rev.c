#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means correct
 */
void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}

	for (b = b - 1 ; b >= 0; b--)
	{
		_putchar (s[b]);

		_putchar ('\n');
	}
