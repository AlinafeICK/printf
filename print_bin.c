#include "main.h"
/**
 * _print_bin - the function convert an integer to binary
 * @argument: the variable of the list
 * Return: value
 */
int _print_bin(va_list argument)
{
	unsigned int n = va_arg(argument, unsigned int);
	int count;
	int binary[32];
	int i;

	if (n == 0)
	{
		_putchar ('0');
		return (1);
	}
	count = 0;
	i = 0;

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar (binary[i] + '0');
		count++;
	}
	return (count);
}
