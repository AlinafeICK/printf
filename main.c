#include "main.h"
/**
 * main - test program
 * Return: 0 success
 */
int main(void)
{
	int print_char;

	print_char = _printf("This is our first team project\n");
	print_char += _printf("%c %c %c \n", 'A', 'L', 'X');
	print_char += _printf("%s\n", "string test");
	print_char += _printf("Test for %% symbol\n");

	return (0);
}
