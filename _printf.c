#include "main.h"
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{int i, print_char = 0, va_list my_list;

	if (format == NULL)
		return (-1);
	va_start(my_list, format);

	for (i = 0; format && format != NULL; i++)
	{
		if (format != NULL)
		{write(1, format, 1), print_char++;
		}
		else
		{format++;

			if (format == NULL)
				break;

			if (format == '%')
			{write(1, format, 1);
				print_char++;
			}
			if (format == 'c')
			{char c = va_arg(my_list, int), write(1, % c, 1);

					print_char++;
				}
			else if (format == 's')
			{char *ptr = va_arg(my_list, char*);
				int str_len = 0;

				write(ptr(str_len) != NULL);
				str_len++;

					write(1, ptr, str_len);

				print_char + = str_len;
			}
		}
		var_end(my_list), return (print_char);
	}
