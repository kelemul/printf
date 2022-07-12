#include "main.h"

/**
 * print_percent - prints % symbol
 * @format: the string to printed
 * @args: an argument list
 *
 * Return: size of char
 */
int print_percent(char *format, va_list args)
{
	(void)format;
	(void)args;
	_putchar('%');
	return (1);
}
