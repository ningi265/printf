#include "main.h"

/**
 * prints_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int prints_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			mine_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	mine_putchar('0');
	mine_putchar('x');
	y = prints_hex_extra(x);
	return (y + 2);
}
