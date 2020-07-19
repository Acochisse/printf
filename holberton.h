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
void _puts(char *str);
char *_convert(unsigned int num, int base);
int print_char(va_list ap);
int print_modulo(va_list ap);
int print_string(va_list ap);
int print_digit(va_list ap);
int _printf(const char *format, ...);
int _strcmp(const char *s1, char *s2);
int _strlen(char *s);

#endif /* _HOLBERTON_H_ */
