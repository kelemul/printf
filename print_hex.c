#include "main.h"

/**
 * print_hex - prints the hexa decimal value of char
 * @format: the char to be converted
 * @args: list that contains the hexadecimal
 *
 * Return: number.
 */
int print_hex(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num2;
	int i, i2, copy, hexsize1 = 0;
	char *numhex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; hexsize1++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(hexsize1);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10  + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (hexsize1);
}
/**
 * print_HEX - prints a hexadecimal value of the string
 * @format: the string to be passed
 * @args: va_list that contains the hexadecimal to print
 *
 * Return: number of digits printed
 */
int print_HEX(char *format, va_list args)
{
	unsigned int org = va_arg(args, unsigned int);
	unsigned int second;
	int I, I2, dest, sizehex = 0;
	char *hexd;

	(void)format;

	if (org == 0)
		return (_putchar('0'));
	for (second = org; second != 0; sizehex++)
	{
		second = second / 16;
	}
	hexd = malloc(sizehex);
	for (I = 0; org != 0; I++)
	{
		dest = org % 16;
		if (dest < 10)
			hexd[I] = dest + '0';
		else
			hexd[I] = dest - 10 + 'A';
		org = org / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(hexd[I2]);
	free(hexd);
	return (sizehex);
}
