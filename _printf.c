#include "main.h"

/**
 * _printf - printes formatted text
 * @format: string to be formatted
 * Return: length of chars
 */
int _printf(char *format, ...)
{
	int len = 0, (*printchar)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			printchar = printer(format);
			if (printchar)
			{
				q[0] = '%';
				q[1] = format[1];
				len += printchar(q, pa);
			}
			else if (format[1] != '\0')
			{
				len += _putchar('%');
				len += _putchar(format[1]);
			}
			else
			{
				len += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			len += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (len);
}
