#include "main.h"
/**
 * _print_hexa - this function convert integer to octal
 * @argument: the list variable
 * Return: value
 */
int _print_hexa(unsigned int num)
{
	unsigned int temp = num;
	int count = 0;
	int Hex_value;
	int remainder;
	
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
	temp = num;
	while (temp != 0)
	{
		remainder = temp % 16;
		if (remainder < 10)
			Hex_value = remainder + '0';
		else
			Hex_value = remainder - 10 + 'A';
		_putchar (Hex_value);
		temp /= 16;
	}
	return (count);
}
