#include "main.h"


/**
 * print_char - prints a char.
 * @args: argiment list.
 * @format: the string to be formatted
 *
 * Return: length of chars.
 */
int print_char(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}
