#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char character);
int printf_char(va_list args, int printed);
int printf_string(va_list args, int printed);
int _printf(const char *format, ...);
int print_digits(va_list args, int printed);
int printf_integer(va_list args, int printed);
int printf_reverse(va_list args, int printed);

#endif
