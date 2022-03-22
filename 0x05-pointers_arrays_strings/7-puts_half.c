#include "main.h"

/**
 * puts_half - print half of a string
 * @st: A pointer to an int that will be evaluated
 *
 * Return: void which mean is correct
 */

void puts_half(char *str)

{
	int a, last;

	a = 0;
	while (str[a] != '\0')
	{
		a++
	}

	last = (a + 1) / 2;

	for (a = last; str[a]; a++)
	{
		_putchar (str[a]);
	}

	_putchar ('\n');

}
