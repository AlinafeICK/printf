#include "main.h"
/**
 * _print_pointer - this function prints the piinter specifier
 * @argument: this is the list variable
 * Return: the length of character
 */
int _print_pointer(va_list argument)
{
	void *p;/*it can take any charcter or integer*/
	int k;
	long int a;

	p = va_arg(argument, void *);/*will print any character or int*/
	if (p == NULL)
	{
		_putchar ('(');
		_putchar ('n');
		_putchar ('i');
		_putchar ('l');
		_putchar (')');
	}
	a = (unsigned long int)p;
	_putchar ('0');
	_putchar ('x');
	k = _print_hexa_pointer(a);/*converts a to hexadecimal*/
	return (k + 2);
}
