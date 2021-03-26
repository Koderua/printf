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
	int a;

	if (p == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	cast = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	a = print_hex(cast, 0);
	return (a + 2);
}
