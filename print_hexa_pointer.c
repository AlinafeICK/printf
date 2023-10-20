#include "main.h"
/**
 * _print_hexa_pointer - this function convert int to hexa
 * @argument: the list variable
 * Return: value
 */
int _print_hexa_pointer(unsigned long num)
{
	unsigned int temp = num;
	long int i, count = 0;
	long int *hex_values;
	
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
	hex_values = malloc(sizeof(long int) * count);/*allocating a memory for the array*/
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
		if (hex_values[i] >= 0)
			_putchar (hex_values[i] - 10 + 'a');/*a to for lowercase letters*/
		else
			_putchar (hex_values[i] + '0');/*handles 0 to 9 digits*/
	}
	free(hex_values);
	return (count);
}
