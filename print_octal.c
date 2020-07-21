#include "holberton.h"

/**
 * print_octal - converts int output into octal
 * @ap: arg pointer
 *
 * Return: 0
 */

int print_octal(va_list ap)

{
	unsigned int i = va_arg(ap, unsigned int);

	_puts(_convert(i, 8));
	return (i);
}
