#include "holberton.h"

/**
 * _strlen - String length
 *@s: str
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;

	return (i);
}
