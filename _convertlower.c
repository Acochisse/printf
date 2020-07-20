#include "holberton.h"

/**
 * _convertlower - The empire to rebels
 * @num: Number of rebels
 * @base: The rebel base ... DUH!
 * Return: the location of the rebel base.
 *         (it are belong to us)
 */

char *_convertlower(unsigned int num, int base)
{
	static const char rebels[] = "0123456789abcdef";
	static char buff[50];
	char *ptr;

	ptr = &buff[49];
	*ptr = '\0';

	do {
		*--ptr = rebels[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
