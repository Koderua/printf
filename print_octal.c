#include "holberton.h"

/**
 * print_octal - prints octal number
 * @vl: Integer
 * Return: int
 */

int print_octal(va_list vl)
{
	unsigned int n = va_arg(vl, unsigned int);
	int  i = 0, j;
	int arr[128];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
		arr[i++] = n % 8,
		n /= 8;

	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');

	return (i);
}
