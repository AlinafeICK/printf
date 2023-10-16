#include "main.h"
/**
 * _printf - customer printf function
 * @format: argument parament
 * @...: argument parament
 * Return: count of processed arguments
 */
int _printf(const char *format, ...)
{
	int char_counter = 0;
	va_list arguments;

	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char_counter += _putchar(va_arg(arguments, int));
			}
			else if (*format == 's')
			{
				char_counter += _string(va_arg(arguments, char *));
			}
			else if (*format == 'd' || *format == 'i')
			{
				char_counter += _print_int(va_arg(arguments, int));
			}
			else if (*format == '%')
			{
				char_counter += _putchar('%');
			}
			else
			{
				char_counter += _putchar('%');
				char_counter += _putchar(*format);
			}
		}
		else
			{
				char_counter += _putchar(*format);
			}
		format++;
		}
		va_end(arguments);
		return (char_counter);
}
