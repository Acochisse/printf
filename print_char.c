#include "holberton.h"

/**
 * print_char - Print char
 * @ap: arg ptr
 * Return: char
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (0);
}
