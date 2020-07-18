#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares strings
 *@s1: first string
 *@s2: second string
 *
 *Return: int
 */

int _strcmp(const char *s1, char *s2)

{
	int i;


	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
