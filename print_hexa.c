#include "holberton.h"

/**
 * print_hex_lower - print hexadecimal number
 * @vl: unsigned int
 * Return: int
 */

int print_hex_lower(va_list vl)
{
	unsigned int c = va_arg(vl, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 87 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

/**
 * print_hex_upper - print a
 * @vl: unsigned int
 * Return: int
 */

int print_hex_upper(va_list vl)
{
	unsigned int c = va_arg(vl, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 55 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);

	return (i);
}


/**
 * print_hex - print an address
 * @c: unsigned long int
 * @cap: int
 * Return: no return
 */

int print_hex(unsigned long int c, int cap)
{
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = cap ? 55 + temp : 87 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}
