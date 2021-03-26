#include "holberton.h"

/**
 * print_unsigned - prints an unsigned integer
 * @vl: Integer
 * Return: int
 */

int print_unsigned(va_list vl)
{
	unsigned int n = va_arg(vl, int);
	long int count = 1, num = n;

	while (n > 9)
		n /= 10,
		count++;

	print_num_rec(num);
	return (count);
}
