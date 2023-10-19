#include "main.h"
#include <stdarg.h>

/**
 * _print_Int - function that checks for integers and dec
 * @argument: the name of the list
 * Return: the value
 */
int _print_Int(va_list argument)
{
	int n = va_arg(argument, int);
	int counter = 0;
	int num;

	if (n < 0)
	{
		counter += _putchar('-');
		n = -n;
	}
	num = 0;

	do {
		num /= 10;
		counter++;
	} while (num != 0);
	do {
		num = n % 10;
		counter += _putchar (num + '0');
		n /= 10;
	} while (n != 0);
	return (counter);
}
