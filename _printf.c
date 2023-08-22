#include "main.h"
/**
 * _printf - printd function
 * @format: input
 * Return: the number of primted characters
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;
	if (format == NULL)
	return -1;

	va_start(args, format);

	while (*format)
	{
		if (*format == '\0')
		{
			_putchar(*format);
		printed++;
		}
		else
		{
			switch (*format++)
			{
				case '\0':
					{
						break;
					}
				case '%':
					{
						_putchar('%');
						break;
					}
				case 'c':
					{
						_putchar(va_arg(args, int));
			printed++;
			break;
					}
				case 's':
					{
						printed = printf_string(args, printed);
			break;
					}
			}
		}
		format++;
	}
	va_end(args);
	return (printed);
}


