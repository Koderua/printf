#include "holberton.h"

/**
 * print_char - print a character
 * @vl: char
 * Return: int
 */

int print_char(va_list vl)
{
	return (_putchar(va_arg(vl, int)));
}
