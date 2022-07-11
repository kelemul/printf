#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

int print_int(va_list arg);
int print_char(va_list arg);
int print_UPPER_STRING(va_list arg);
int print_lower_string(va_list arg);
int print_unsigned_int(va_list arg);
int print_octal_base(va_list arg);
void print_binary(unsigned int n, unsigned int *prt);
int print_unsignedToBinary(va_list arg);
int print_unsigned_Hex(unsigned int num, char c);
int print_hex_base(va_list arg, char c);
int print_lower_hex(va_list arg);
int print_UPPER_HEX(va_list arg);
