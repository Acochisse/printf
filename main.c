#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n\n");

    ui = (unsigned int)INT_MAX + 1024;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n\n", len2 - 1, len2 - 1);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n\n", -762534);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n\n", ui, ui);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n\n", "I am a string !");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n\n", len2 - 1);
    return (0);
}
