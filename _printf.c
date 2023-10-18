#include "main.h"
/**
 * _printf - customer printf function
 * @format: argument parament
 * @...: argument parament
 * Return: count of processed arguments
 */
int _printf(const char *format, ...)
{
	find specifier[] ={
		{'c', _character},
		{'s', _string},
		{'%', _modulus},
		{'d', _print_int},
		{'i', _print_int},
		{0, NULL}
	};
	int i;
	va_list argument;
	
	va_start(argument, format);

	int count_char = 0;

	while (*format)
	{
		if (*format != '%')
		{
			_putchar (*format);
			count_char++;/*counts the character as it progresses*/
		}
		else
		 {
			format++;/*move past the %*/
			int specifier_find = 0;

			for (i = 0; specifier[i].specifier!= 0; i++)/*iterate through the array of function specifiers*/
			{
				if (specifier[i].specifier == *format)
				{
					count_char += specifier[i].print(argument);
					specifier_find = 1;
					break;
				}
			}
			if (!specifier_find)
			{
				_putchar ('%');
				_putchar (*format);
				count_char += 2;
			}
		}
		format++;
	}
	va_end(argument);
	return (count_char);
}
