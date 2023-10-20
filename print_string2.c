#include "main.h"
/**
 * _non_print_char - this function prints non printable characters
 * @argument: the list variable
 * Return: the value
 */
int _non_print_char(va_list argument)
{
	char *str;
	int length = 0;
	int value;

	str = va_arg(argument, char *);/*set the string from the function*/
	if (str == NULL)
		str = "(nil)";/*set the string nil for printing*/
	while (*str)
	{
		if (*str >= 32 && *str < 127)/*check if the current charcter is printable*/
		{
			_putchar (*str);
			length++;
		}
		else if (*str == '\n')
		{
			_putchar ('\\');
			_putchar ('x');
			_putchar ('0');
			_putchar ('A');
			length += 4;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			value = *str;
			if (value < 16)
			{
				_putchar('0');
				length += 3;
			}
			else
				length += 4;
			length = length + _print_hexa(value);/*call a function to print hexadecimal representation*/
		}
		str++;/*move to the next chatcter*/
	}
	return (length);
}
