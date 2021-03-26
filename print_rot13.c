#include "holberton.h"

/**
 * print_rot13 - print string in rot13
 * @vl: string
 * Return: int
 */

int print_rot13(va_list vl)
{
	unsigned int i, j;
	int count = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(vl, char *);

	if (!str)
		str = "(ahyy)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
			if (alpha[j] == str[i])
			{
				_putchar(rot[j]);
				count++;
				break;
			}

		if (!alpha[j])
			_putchar(str[i]),
			count++;
	}

	return (count);
}
