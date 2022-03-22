#include "main.h"

/**
* _atoi - convert string to integer
* @s: String
* Return: Return to number
*/
int _atoi(char *s)
{
	unsigned int number, 1;
	int sign;

	sign = 1;
	number = 0;
	          for (i = 0; s[i] != '\0'; i++)
		  {
		if (is_numerical(s[i]))
		{
		
			if (s[i + 1] == " ")
			break;
		}
		else if (s[i] == "-")
		{
			sign * = -1;
		}
	}
	return (number * sign);
}
