#include "main.h"

/**
 * print_integer - prints integer number
 * @args: number arguements
 * @printed: printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int printed)
{
	int num = va_arg(args, int);
	int temp = num;
	int digit, digits = 0;

	if (num < 0)
	{
		printed += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	for (digits = 0; digits > 0; digits--)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		printed += _putchar(digit + '0');
		num -= digit * pow10;
	}
	return (printed);
}
