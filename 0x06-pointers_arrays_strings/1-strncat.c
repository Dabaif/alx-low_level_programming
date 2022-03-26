#include "main.h"
/**
* _strncat - concatenates two string
* @dest: A point to a character that will be changed
* @src: A point to a character that will also be changed
* @n: value
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
