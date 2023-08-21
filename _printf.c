#include "main.h"
/**
 * _printf - printf function.
 * @format: input
 * Return: length of input.
 */
int _printf(const char *format, ...)
{
	int cha_printed = 0, i = 0;
	va_list args;
	va_start(args, format);

	while (format[i])
	{
	if (format[i] == '%')
	{
		i++;
		cha_printed++;

		switch (format[i])
		{
			case 'c':
				{
		int x = va_arg(args, int);
		write(1, &c, 1);
		break;
				}
			case 's':
				{
		char *x = va_arg(args, char*);
		int strlen = 0;
		while(x[strlen] != '\0')
		strlen++;
		write(1, x, strlen);
		cha_printed += strlen;
		break;
				}
			case '%':
				write(1, format[i], 1);
				break;
		}
	}
	else
	{
		write(1, format[i], 1);
		cha_printed++;
	}
		i++;
	}
	va_end(args);
	return (cha_printed);
}
