#include "main.h"
/**
 * _print_octal - this function convert integer to octal
 * @argument: the list variable
 * Return: value
 */
int _print_octal(va_list argument)
{
	unsigned int num = va_arg(argument, unsigned int);
	unsigned int temp = num;
	int i, count = 0;
	int *octal_values;
	
	if (num / 8 != 0)/*checcks if the value is divided by 8*/
	{
		num = num / 8;
		count++;
	}
	count++;

	octal_values = malloc(sizeof(int) * count);/*allocating a memory for the array*/
	if (octal_values == NULL)
		return (-1);
	for (i = 0; i < count; i++)/*loop store octal digit in the array*/
	{
		octal_values[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar (octal_values[i] + '0');
	}
	free(octal_values);
	return (count);
}
