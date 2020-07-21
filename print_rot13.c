#include "holberton.h"

/**
 * print_rot13 - encode string using rot13
 * @ap: string to encode
 * Return: encoded string
 */

int print_rot13(va_list ap)
{
	char *s = va_arg(ap, char *);

	int a[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		     'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		     'W', 'X', 'Y', 'Z'};
	int b[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		     'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		     'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};

	int i, j;

	for (i = 0; s[i]; i++)
	{
		j = 0;
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				break;
			} else if (j == 51)
				_putchar(s[i]);
		}
	}

	return (j - 1);
}
