#include <unistd.h>

/**
 * _putchar - prints a char passed from printer
 * @ch: A char to print
 *
 * Return: Output.
 */
int _putchar(char ch)
{
	static int i;
	static char charsize[1024];

	if (ch == -1)
	{
		i = 0;
		return (0);
	}
	if (ch == -2 || i == 1024)
	{
		write(1, charsize, i);
		i = 0;
	}
	if (ch != -1 && ch != -2)
	{
		charsize[i] = ch;
		i++;
		return (1);
	}
	return (0);
}
