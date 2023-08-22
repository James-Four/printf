#include "main.h"
/**
 * _printf - printf function
 * @format: input
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			printed++;
			break;
		case 's':
			printed = printf_string(args, printed);
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
		case 'i':
		case 'd':
			printed = printf_integer(args, printed);
			break;
		case 'r':
			printed = printf_reverse(args, printed);
			break;
		case '0':
			printed = printf_octal(va_arg(args, unsigned int), printed);
			break;
		default:
			break;
	}
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
