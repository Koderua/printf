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
	char nl[] = "(null)";

	if (!s)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);

}
