#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);


op_printf ops[] = {
	{"c", op_char},
	{"s", op_string}
	{"%", op_modulo}
	{"d", op_digit}
	{"i", op_int}
	{"\n", op_new_line}
	{NULL, NULL}
};

#endif
