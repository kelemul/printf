#include "main.h"

/**
 * printer - selects what to print.
 * @format: string passed as an argument.
 *
 * Return: a pointer
 * printchar printtype - Struct
 */

int (*printer(char *format))(char *format, va_list)
{
int i;

printchar printtype[] = {
{"%c", print_char},
{"%s", print_str_lower},
{"%d", print_int},
{"%i", print_int},
{"%%", print_percent},
{"%x", print_hex},
{"%X", print_HEX},
{"%o", print_octa},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; printtype[i].q; i++)
{
if (format[1] == printtype[i].q[1])
return (printtype[i].u);
}
return (NULL);
}
