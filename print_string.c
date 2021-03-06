#include "holberton.h"

/**
 * print_string - Prints string
 * @ap: arg
 * Return: string
 */

int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	char *null = "(null)";
	int i, len, null_len = _strlen(null);

	if (!str)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (null_len - 1);
	}

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len - 1);
}
