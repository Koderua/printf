#include "holberton.h"

/**
 * _printf - Formatted output
 * @fmt: first argument
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *fmt, ...)
{
	int i = 0, j, len = 0, count = 0;
	va_list valist;
	funcs func_types[] = {
	{'c', print_char}, {'s', print_string}, {'d', print_number},
	{'i', print_number}, {'r', print_rev}, {'b', print_binary},
	{'R', print_rot13}, {'u', print_unsigned}, {'o', print_octal},
	{'x', print_hex_lower}, {'X', print_hex_upper}, {'p', print_pointer},
	{'S', print_special_chars}};

	if (!fmt || (fmt[0] == '%' && fmt[1] == 0))
		return (-1);

	va_start(valist, fmt);
	while (fmt && fmt[i])
	{
		if (fmt[i] == '%')
		{
			if (fmt[++i] == '%')
				len += _putchar('%');
			j = 0;
			while (j <= 12)
			{
				if (fmt[i] == func_types[j].t)
				{
					len += func_types[j].f(valist);
					count = 1;
					break; }
				j++; }
			if (!count && fmt[i] != '%')
				len += 2,
				_putchar('%'),
				_putchar(fmt[i]); }
		else
			len += _putchar(fmt[i]);
		i++;
	}
	va_end(valist);
	return (len);
}
