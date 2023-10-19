#include "main.h"

/**
 * _print_int - function that checks for integers
 * both positive and negative then prints to stdout
 * @n: integer argument
 * Return: Negative or positive integers
 */
int _print_int(va_list argument)
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

	do
	{
		num /= 10;
		counter++;
	}
	while (num != 0);
	do
	{
		num = n % 10;
		counter += _putchar (num + '0');;
		n /= 10;
	}
	while (n != 0);

	return (counter);
}
