#include "holberton.h"

/**
 * print_hex - converts input into codeasaurus hex
 * @ap: arg pointer
 * Return: 0
 */

int print_lhex(va_list ap)

{
	unsigned int n = va_arg(ap, int);
	int i, j, k, div, num = n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	for (i = 1; (num / 16) != 0; i++)
		num /= 16;
	for (j = (i - 1); j >= 0; j--)
	{
		div = 1;
		for (k = 0; k < j; k++)
			div *= 16;
		if (n)
		{
			_putchar((n / 16) + '0');
			n %= 16;
		}
	}

	return (i - 1);
}
