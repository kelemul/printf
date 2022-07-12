#include "main.h"

/**
 * _abs - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * digCounter - counts the digits.
 * @number: input print_int
 * Return: digit count
 */
int digCounter(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
/**
 * p_int - a function that prints an print_int.
 * @number: input print_int
 * Return: digit count
 */
int p_int(int number)
{
	unsigned int unint;
	int count;

	count = digCounter(number);
if (number < 0)
{
_putchar('-');
unint = -number;
}
	else
		unint = number;

	if (unint >= 10)
		p_int(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * print_int - prints a number
 * @format: format to print number
 * @args: va_list with number to print
 * Return: number of characters printed
 */
int print_int(char *format, va_list args)
{
	int number = va_arg(args, int);
	int numsize;
	(void)format;

	numsize = p_int(number);

	return (numsize);
}
