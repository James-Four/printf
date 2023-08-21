#include "main.h"

/**
 * _putchar - writes character
 * @character: character to print
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
