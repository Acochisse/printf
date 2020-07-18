#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct get_format
{
	char *s_char;
	int (*func)(va_list ap);
} get_f;

int _putchar(char c);
int print_char(va_list ap);
int _printf(const char *format, ...);
int _strcmp(const char *s1, char *s2);

#endif /* _HOLBERTON_H_ */
