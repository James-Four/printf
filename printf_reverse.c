#include "main.h"

/**
 * printf_reverse - prints binary numbers
 * @args: number of arguements
 * @printed: printed characters
 * Return: printed charcaters
 */

int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}
	
	i = len - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		printed++;
		i--;
	}

	return (printed);
}
