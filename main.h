#ifndef _MAIN_H_
#define _MAIN_H_
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>


typedef struct/*the structure we will iterate through*/
{
	char specifier;/*this is aformat string specifier*/
	int (*function)();/*function pointer to the corresponding print function*/
} find;
int _putchar(char c);
int _printf(const char *format, ...);
int _string(va_list argument);
int _print_int(va_list argument);
int _print_dec(va_list argument);
int _character(va_list argument);
int _modulus(void);
int _print_bin(va_list argument);
int _print_unsigned(va_list argument);
int _print_octal(va_list argument);
int _print_hex(va_list argument);
int _print_Hex(va_list argument);
int _non_print_char(va_list argument);
int _print_hexa(unsigned int num);
int _print_pointer(va_list argument);
int _print_hexa_pointer(unsigned long num);

#endif /*_MAIN_H_*/
