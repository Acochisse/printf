#include "holberton.h"

/**
 * *string_tolower - converts input into lowercase
 * @c: input string
 *
 * Return: char
 */

char *string_tolower(char *c)

{
	int i;
	const int ASCII_DIF = 32;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] = c[i] + ASCII_DIF;

	return (c);
}
