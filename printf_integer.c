#include "main.h"

/**
 * print_integer - function that handles %i and %d
 * @args: list from printf
 * Return: void
 */
void print_integer(va_list args)
{
    int num = va_arg(args, int);
    int len = snprintf(NULL, 0, "%d", num);

    if (len < 0) {
        // Handle snprintf error here
        return;
    }

    char str[len + 1];
    int written = snprintf(str, sizeof(str), "%d", num);

    if (written < 0) {
        // Handle snprintf error here
        return;
    }

    write(1, str, written);
}
