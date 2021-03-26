#include "holberton.h"

/**
 * print_pointer - print an address (pointer)
 * @vl: argument
 * Return: hex
 */

int print_pointer(va_list vl)
{
	void *p = va_arg(vl, void*);
	long int cast;
	int a, i;
	char nl[] = "(nil)";

	if (!p)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	cast = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	a = print_hex(cast, 0);
	return (a + 2);
}
