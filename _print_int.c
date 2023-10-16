#include "main.h"

/**
 * _print_int - function that checks for integers
 * both positive and negative then prints to stdout
 * @n: integer argument
 * Return: Negative or positive integers
 */
int _print_int(int n)
{
	int counter = 0;

	if (n < 0)
	{
		counter += _putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		counter += _print_int(n / 10);
	}
	counter += _putchar(n % 10 + '0');
	return (counter);
}
