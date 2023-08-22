#include "main.h"

/**
 * print_digits - function that imitates printf integer printing functionality
 * @args: variable number of arguments that can be collected
 * @printed: printed characters
 * Return: returns printed
 */
int print_digits(va_list args, int printed)
{
    int number = va_arg(args, int);
    char number_str[12]; // Assuming an integer won't be longer than this
    int len = sprintf(number_str, "%d", number);

    if (len < 0) {
        // Handle sprintf error here if needed
        return printed;
    }

    write(1, number_str, len);
    printed += len;
    return printed;
}
