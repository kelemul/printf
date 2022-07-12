#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct printfunc - a structure of formatted string 
 * @q: holds characters to be formatteds.
 * @u: print function.
 *
 * Return: int
 */
typedef struct printfunc
{
	char *q;
	int (*u)(char *format, va_list);
} printchar;

int _puts(char *string);
int print_char(char *format, va_list);
int print_str_lower(char *format, va_list);
int (*printer(char *format))(char *format, va_list);
int _printf(char *format, ...);
int print_int(char *format, va_list pa);
int p_int(int number);
int digConverter(int number);
int _abs(int number);
int print_percent(char *format, va_list pa);
int print_hex(char *format, va_list);
int print_HEX(char *format, va_list);
int print_octa(char *format, va_list);
int print_unsign(char *format, va_list);
int _putchar(char ch);
int print_binary(char *format, va_list);
