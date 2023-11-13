#include "main.h"
/**
 * prints_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int prints_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			mine_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			mine_putchar(s[i]);
		return (len);
	}
}
