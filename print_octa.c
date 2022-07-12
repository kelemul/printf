#include "main.h"
/**
 * print_octa - prints octaDecimal representation
 * @format: the string to be formatted
 * @args: list of arguments
 *
 * Return: char size
 */
int print_octa(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int dest;
	char *octa;
	int i, i2 = 0, OctSize = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (dest = num; dest != 0; i2++)
	{
		dest = dest / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		OctSize++;
	}
	free(octa);
	return (OctSize);
}
