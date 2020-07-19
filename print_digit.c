#include "holberton.h"
#include <stdio.h>

/**
 * print_digit - prints input int to stdout
 * @ap: arg ptr
 * Return: digit
 *
 */

int print_digit(va_list ap)

{
	int i = va_arg(ap, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	_puts(_convert(i, 10));
	return (0);
}
