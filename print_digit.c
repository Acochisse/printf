#include "holberton.h"

/**
 * print_digit - prints input int to stdout
 * @ap: arg ptr
 * Return: digit
 *
 */

int print_digit(va_list ap)

{
	int i = va_arg(ap, int);
	unsigned int u;
	if (i < 0)
	{
		u = -i;
		_putchar('-');

	}
	else
		u = i;
	_puts(_convert(u, 10));
	return (i);
}
