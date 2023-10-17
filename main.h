#ifndef _MAIN_H_
#define _MAIN_H_
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct/*the structure we will iterate through*/
{
	char *str;
	int (*function)(va_list argument);
}find;
int _putchar(char c);
int _printf(const char *format, ...);
int _putchar(char c);
int _string(char *str);
int _print_int(int n);

#endif /*_MAIN_H_*/
