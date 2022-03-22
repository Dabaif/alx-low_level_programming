#include "main.h"
/**
 * puts2 - print every character of a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means correct
 */

void puts2(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (m % 2 == 0)
			_putchar (str[m]);
	}

	_putchar ('\n');
}
