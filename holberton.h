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
void _puts(char *);
char *_convert(unsigned int num, int base);
char *string_tolower(char *c);
int print_char(va_list ap);
int print_modulo(va_list ap);
int print_string(va_list ap);
int print_digit(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_lhex(va_list ap);
int print_unsigned(va_list ap);
int _printf(const char *format, ...);
int _strcmp(const char *s1, char *s2);
int _strlen(char *s);
int print_reverse(va_list ap);

#endif /* _HOLBERTON_H_ */
