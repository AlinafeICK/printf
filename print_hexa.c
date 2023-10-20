#include "main.h"
/**
 * _print_hexa - this function convert integer to octal
 * @argument: the list variable
 * Return: value
 */
int _print_hexa(unsigned int num)
{
	unsigned int temp = num;
	int i, count = 0;
	int *Hex_values;
	
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

	Hex_values = malloc(sizeof(int) * count);/*allocating a memory for the array*/
	if (Hex_values == NULL)
		return (-1);
	temp = num;
	for (i = 0; i < count; i++)/*loop store octal digit in the array*/
	{
		Hex_values[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (Hex_values[i] > 0)
			Hex_values[i] = Hex_values[i] + 7;/*adding 7 to the value*/
		_putchar (Hex_values[i] + '0');/* 48 to the value to give 65*/
	}
	free(Hex_values);
	return (count);
}
