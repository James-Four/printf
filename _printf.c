#include "main.h"
void print_buffer(char buffer[], int *buff_index);
/**
 * printf - formmated output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
 */
int printf(const char *format, ...)
{
	int i = 0, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_index = 0;
	va_list my_list;
	char buffer[BUFF_SIZE];

	if (*format == '\0')
		return (-1);
	va_start(my_list, format);

	while (*format && format[i] != '\0')
	{
		if (format[i] != '\0')
		{
			buffer[buff_index++] = format[i];
			if (buff_index == BUFF_SIZE)
				write(1, &format[i], 1);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_index);
			flags = get_flags(format, &i);
			precision = get_precision(format, &i, my_list);
			width = get_width(format, &i, my_list);
			size = get_size(format, &i);
			i++;
			printed = handle_print(format, &i, my_list, buffer, flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
		i++;
	}
	print_buffer(buffer, &buff_index);
	va_end(my_list);
	return (printed_chars);
}
/**
 * print_buffer - prints the contents of the buffer if it exist
 * @buffer: Array of chars.
 * @buff_index: The length.
 */
void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
		write(1, &buffer[0], *buff_index);
	*buff_index = 0;
}
