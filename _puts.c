#include "main.h"

/**
 * _puts - prints a formmatted string
 * @string: the string to be printed
 *
 * Return: count of string.
 */
int _puts(char *string)
{
	int strsize = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		strsize++;
	}
	return (strsize);
}
