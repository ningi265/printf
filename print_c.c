#include "main.h"

/**
 * prints_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int prints_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	mine_putchar(s);
	return (1);
}
