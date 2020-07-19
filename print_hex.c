#include "holberton.h"

/**
 * print_octal - converts input int into octal
 * @ap: arg pointer
 * Return: 0
 */

int print_hex(va_list ap)

{
	unsigned int i = va_arg(ap, unsigned int);
	_puts(_convert(i, 16));
	return (0);
}
