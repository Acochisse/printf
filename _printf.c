#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list ap;
	get_f conv_spec[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	if (!format || !_strcmp(format, "%"))
	{
		return (99);
	}

	va_start(ap, format);

	/* stuff goes here. */

	va_end(ap);
	return (0);
}
