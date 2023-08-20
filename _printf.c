#include "main.h"
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{int print_char = 0;
	va_list my_list;

	if (*format =='\0')
		return (-1);
	va_start(my_list, format);

	while (*format)
	{
		if (*format != '\0')
		{write(1, format, 1), print_char++;
		}
		else
		{format++;

			if (*format == '\0')
				break;

			if (*format == '%')
			{write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{char c = va_arg(my_list, int);
				write(1, &c, 1);

					print_char++;
				}
			else if (*format == 's')
			{char *str = va_arg(my_list, char*);
				int str_len = 0;

				while (str[str_len] != '\0');
				str_len++;

					write(1, str, str_len);

				print_char += str_len;
			}
		}
		format++;
	}
		va_end(my_list);
		return (print_char);
	}
