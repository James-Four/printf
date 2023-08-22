#include "main.h"
#include <stdarg.h>

/**
 * _printf - custom printf function
 * @format: format string
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
    int printed = 0;
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    // Handle 'c' format specifier
                    _putchar(va_arg(args, int));
                    printed++;
                    break;
                case 's':
                    // Handle 's' format specifier
                    printed += printf_string(args, printed);
                    break;
                case '%':
                    // Handle '%%' format specifier
                    _putchar('%');
                    printed++;
                    break;
                case 'd':
                case 'i':
                    // Handle 'd' and 'i' format specifiers
                    print_digits(args, printed);
                    // Increment printed (since print_integer doesn't return a value)
                    printed++;
                    break;
                default:
                    // Handle unknown format specifier
                    _putchar('%');
                    _putchar(*format);
                    printed += 2;
                    break;
            }
        }
        else
        {
            _putchar(*format);
            printed++;
        }
        format++;
    }

    va_end(args);
    return (printed);
}
