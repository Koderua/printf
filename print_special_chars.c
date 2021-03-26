#include "holberton.h"

/**
 * print_special_chars - convert to special chars
 * @vl: argument
 * Return: int
 */

int print_special_chars(va_list vl)
{
	int i, len = 0;
	char *s = va_arg(vl, char *);
	unsigned int h;
	char nl[] = "(null)";

	if (!s)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar(92);
			_putchar(120);
			len = len + 2;
			h = s[i];
			if (h < 16)
				_putchar (48),
				len++;
			len = len + print_hex(h, 1);
		}
		else
			_putchar(s[i]),
			len++;

	return (len);
}
