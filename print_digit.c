#include "holberton.h"

/**
 * print_digit - prints input int to stdout
 * @ap: arg ptr
 * Return: digit
 *
 */

int print_digit(va_list ap)

{
	int i, div;
	int n = va_arg(ap, int);
	int num = n, j, k, neg = 0;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	for (i = 1; (num / 10) != 0; i++)
	{
		num /= 10;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		div = 1;
		for (k = 0; k < j; k++)
			div *= 10;
		if (n < 0)
		{
			_putchar('-');
			_putchar((0 - (n / div)) + '0');
			n %= div;
			n = 0 - n;
			neg = 1;
		}
		else
		{
			_putchar((n / div) + '0');
			n %= div;
		}
	}
	return (i - 1 + neg);
}
