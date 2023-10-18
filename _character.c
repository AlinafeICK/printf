#include "main.h"
/**
 * _character - printing a character
 * @va_list: the list to be printed from
 * @argument: the last argument displayed
 * Return: charcter
 */
int _character(va_list argument)
{
	int x = va_arg(argument, int);

	return (_putchar (x));
}
