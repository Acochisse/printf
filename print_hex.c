#include "holberton.h"

/**
 * print_hex - converts input into codeasaurus hex
 * @ap: arg pointer
 * Return: 0
 */

int print_hex(va_list ap)

{
	unsigned int n = va_arg(ap, int);
	int i;
	unsigned int num = n;
	static const char rebels[] = "0123456789ABCDEF";
	static char buff[50];
	char *ptr;

	ptr = &buff[49];
	*ptr = '\0';


	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	do {
		*--ptr = rebels[num % 16];
		num /= 16;
	} while (num != 0);

	for (i = 0; ptr[i] != 0; i++)
		_putchar(ptr[i]);
	return (i - 1);
}
