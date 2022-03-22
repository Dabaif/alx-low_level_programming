#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be channged
 *
 * Return: void that means your answer is correct
 */
int _strlen(char *s)
{
	int f;

	f = 0;
	while (s[f] ! = "\0")
	{
		f++;
	}
	return (f);
}
