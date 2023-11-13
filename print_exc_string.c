#include "main.h"
/**
 * prints_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int prints_exc_string(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			mine_putchar('\\');
			mine_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				mine_putchar('0');
				length++;
			}
			length = length + prints_HEX_extra(value);
		}
		else
		{
			mine_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
