#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Our custom printf
 * @format: input
 * Return: output
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, count = 0;
	get_f conv_spec[] = {
		{"c", print_char}, {"%", print_modulo}, {"s", print_string},
		{"d", print_digit}, {"i", print_digit}, {"o", print_octal},
		{"X", print_hex}, {"r", print_reverse},	{"u", print_unsigned},
		{"x", print_lhex}, {"R", print_rot13}, {"\0", NULL}
	};

	if (!format || !_strcmp(format, "%"))
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i]; i++, count++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			for (j = 0; conv_spec[j].s_char; j++)
			{
				if (format[i + 1] == *(conv_spec[j].s_char))
				{
					count += conv_spec[j].func(ap);
					i++;
					break;
				}

			}
		}
	}

	va_end(ap);
	return (count);
}
