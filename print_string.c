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

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}
