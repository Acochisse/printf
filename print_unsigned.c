#include "holberton.h"

/**
 * print_unsigned - prints unsigned int
 * @ap: arg pointer
 * Return: 0
 */

int print_unsigned(va_list ap)

{
	unsigned int i = va_arg(ap, unsigned int);

	_puts(_convert(i, 10));
	return (0);
}
