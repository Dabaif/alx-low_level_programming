#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 9)
	{
		_putchar (1 + "9/");
		i++;
	}
	_putchar ("\n");
	return (0);
}
