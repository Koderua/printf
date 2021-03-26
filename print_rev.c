#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @vl: string
 * Return: int
 */

int print_rev(va_list vl)
{
	int i = 0, len = 0;
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

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);

}
