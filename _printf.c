#include "main.h"
#include <stddef.h>
/**
 * _printf - this function produces output according to its format
 * @format: the pointer to the first argument
 * @...: the rest of the argument
 * Return: the string
 */
int _printf(const char *format, ...)
{
	int every_char = 0;/*goes through every string*/
	char c;
	va_list arguments;/*initializing the heap for arg*/

	if (*format == '\0')
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			every_char += _putchar(*format);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
					c = va_arg(arguments, int);
					every_char += _putchar(c);
					break;
				case '%':
					every_char += _putchar('%');
					break;
				case 's':
					every_char += _string(va_arg(arguments, char *));
					break;
				default:
					every_char += _putchar('%');
					every_char += _putchar(*format);
					break;
			}
		}
		format++;
	}
	va_end(arguments);
	return (every_char);
}
