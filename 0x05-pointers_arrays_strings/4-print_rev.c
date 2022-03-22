#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means correct
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);

		_putchar ('\n');
	}
}
