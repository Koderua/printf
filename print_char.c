#include "holberton.h"

/**
 * print_char - print a character
 * @vl: char
 * Return: int
 */

int print_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}
