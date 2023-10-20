#include "main.h"
/**
 * _print_hex - this function convert integer to octal
 * @argument: the list variable
 * Return: value
 */
int _print_hex(va_list argument)
{
	unsigned int num = va_arg(argument, unsigned int);
	unsigned int temp = num;
	int i, count = 0;
	int *hex_values;
	
	if (num == 0)/*checcks if the value is divided by 8*/
	{
		_putchar ('0');
		return (1);
	}
	while (temp != 0)
	{
		temp = temp / 16;
		count++;
	}

	hex_values = malloc(sizeof(int) * count);/*allocating a memory for the array*/
	if (hex_values == NULL)
		return (-1);
	temp = num;
	for (i = 0; i < count; i++)/*loop store hex digit in the array*/
	{
		hex_values[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (hex_values[i] > 0)
			hex_values[i] = hex_values[i] + 39;/*add 39 to ur array value*/
		_putchar (hex_values[i] + '0');/*add 48 to the value to give 97 which is 'a'*/
	}
	free(hex_values);
	return (count);
}
