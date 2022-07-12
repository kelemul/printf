#include "main.h"

/**
 * print_str_lower- prints a formatted string.
 * @args: arguments argsssed to function
 * @format: the string to be formatted
 *
 * Return: the size of char.
 */
int print_str_lower(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int charsize;
	(void)format;

	if (string == NULL)
		string = "(null)";
	charsize = _puts(string);
	return (charsize);
}
