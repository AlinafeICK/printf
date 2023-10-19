#include "main.h"
/**
 * _print_int - this function prints an integer
 * @srgument: this is the name of the list
 * Return: value
 */
int _print_int(va_list argument)
{
	int n = va_arg(argument, int);
	int num, last_digit = n % 10, value, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last_digit < 0)
	{
		_putchar ('-');
		num = - num;
		n = -n;
		last_digit = -last_digit;
		i++;
	}
	if (num > 0)

	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			value = num / exp;
			_putchar (value + '0');
			num = num - (value * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last_digit + '0');
	return (i);
}

/**
 * _print_dec - this function prints the decimal
 * @argument: the list
 * Return: value
 */
int _print_dec(va_list argument)
{
	int n = va_arg(argument, int);
	int num, last_digit = n % 10, value, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;
	if (last_digit < 0)
	{
		_putchar ('-');
		num = -num;
		n = -n;
		last_digit = -last_digit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			value = num / exp;
			_putchar (value + '0');
			num = num - (value * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last_digit + '0');
	return (i);
}
