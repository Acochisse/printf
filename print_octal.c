#include "holberton.h"

/**
 * print_octal - converts int output into octal
 * @ap: arg pointer
 *
 * Return: 0
 */

int print_octal(va_list ap)
{
	unsigned int n = va_arg(ap, int);
	int i, j, k, div, num = n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	for (i = 1; (num / 8) != 0; i++)
		num /= 8;
	for (j = (i - 1); j >= 0; j--)
	{
		div = 1;
		for (k = 0; k < j; k++)
			div *= 8;
		if (n)
		{
			_putchar((n / div) + '0');
			n %= div;
		}
	}

	return (i - 1);
}
