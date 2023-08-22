#include "msin.h"
/**
 * print_binary - print binary numbers
 * @num: number arguments
 * @printed: ptinted characters
 * Return: printed characters
 */
int print_binary(unsigned int num, int printed)
{
	int i, binary[32] = {0};;

	if (num == 0)
	{
		_putchar('0');
		printed++;
		return (printed);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	for (i = 0,i > 0; i--)
	{
		_putchar('0' + binary[i]);
		printed++;
	}

	return (printed);
}
