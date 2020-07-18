#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, count = 0;
	get_f conv_spec[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	if (!format || !_strcmp(format, "%"))

	{
		printf("Format: %s\n", format);
	}

	if (!strcmp(format, "%"))
	{
		printf("strcmp: %s\n", format);
	}

	va_start(ap, format);

	for (i = 0; format[i]; i++, count++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
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
