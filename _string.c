#include "main.h"
/**
 * _string - Function that prints strings
 * @str: pointer argument
 * Return: Strings
 */
int _string(char *str)
{
	int length = strlen(str);

	return (write(1, str, length));
}
