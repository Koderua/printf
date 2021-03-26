#include "holberton.h"

/**
 * print_string - print a string
 * @vl: pointer to string
 * Return: int
 */

int print_string(va_list vl)
{
	int i;
	char *s = va_arg(vl, char *);
	char nl[] = "(null)";

	if (!s)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}
