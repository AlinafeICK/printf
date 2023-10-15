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

	va_list arguments;/*initializing the heap for arg*/

	if (*format == '\0')
	{
		return (-1);
	}

	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			every_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
			       	break;
			if (*format == 'c')
			{
				char c = va_arg(arguments, int);

				write(1, &c, 1);
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				every_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arguments, char *);
				int length = strlen(str);

				write(1, str, length);
				every_char = length;
			}
		}
		format++;
	}
	va_end(arguments);
	return (every_char);
}
/**
 * main - checking if the code works
 * Return: always o success
 */
int main(void)
{
	_printf("This is my first project\n");
	_printf("%c %c %c \n", 'A', 'L', 'x');
	_printf("%s\n", "naeemah my niece at 2ys 9months");
	_printf("this is the %% sign\n");
	return (0);
}
