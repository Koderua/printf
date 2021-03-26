#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
* struct types_arguments - Struct op
* @t: The operator
* @f: The function
*/
typedef struct types_arguments
{
	char t;
	int (*f)(va_list vl);
} funcs;

int _putchar(char c);
int print_char(va_list vl);
int print_string(va_list vl);
int print_number(va_list vl);
void print_num_rec(int n);
int print_rev(va_list vl);
int print_rot13(va_list vl);
int print_binary(va_list vl);
int print_unsigned(va_list vl);
int print_octal(va_list vl);
int print_hex_lower(va_list vl);
int print_hex_upper(va_list vl);
int print_hex(unsigned long int c, int cap);
int print_pointer(va_list vl);
int print_special_chars(va_list vl);
int _printf(const char *format, ...);

#endif
