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

	return (write(1, str, length));
}

/**
 * _putchar - printing a letter
 * @c:the character
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
/**
 * main - checking if the code works
 * Return: always o success
 */
int main(void)
{
	int print_char;

	print_char = _printf("This is my first project\n");
	print_char += _printf("%c %c %c \n", 'A', 'L', 'x');
	print_char += _printf("%s\n", "naeemah my niece at 2ys 9months");
	print_char += _printf("this is the %% sign\n");
	return (0);
}
