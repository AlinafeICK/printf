#include "main.h"
#include <stddef.h>
/**
 * _string - this function print the string
 * @str: the string
 * Return: the string
 */
int _string(char *str)
{
	int length = strlen(str);

	write(1, str, length);
	return (0);
}

/**
 * _putchar - printing a letter
 * @c:the character
 * Return: value
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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
	char *str;
	va_list arguments;/*initializing the heap for arg*/

	if (*format == '\0')
		return (-1);
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
					str = va_arg(arguments, char *);

					_string(str);
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
