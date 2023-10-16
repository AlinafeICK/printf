#include "main.h"

/**
 * _putchar - printing function for letters
 * @c: function argument
 * Return: Passed argument
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
