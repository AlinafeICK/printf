#include "main.h"
/**
 * _string - Function that prints strings
 * @va_list: the list of arguments
 * @argument: the name of the list
 * Return: Strings
 */
int _string(va_list argument)
{
	char *str;
	int length = 0;
	int i;

	str = va_arg(argument, char *);

	if (str == NULL)
	{
		return (0);/*this indicates no charcters printed*/
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar (str[i]);
			length++;
		}
		return (length);
	}

}
