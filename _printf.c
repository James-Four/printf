#include "main.h"

/**
 * _printf - printf function.
 * @format: input.
 * Return: the formated string.
 */

int _printf(const char *format, ...)
{
	int printed = 0;

	va_list args;

	if (format == NULL)
		return -1;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed = select(format, args, printed);
			format++;
		}
		else
		{
			_putchar(*format);
			printed++;
			format++;
		}
	}
	va_end(args);
	return (printed);
}
