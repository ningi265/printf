#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", prints_s}, {"%c", prints_c},
		{"%%", prints_37},
		{"%i", prints_i}, {"%d", prints_d}, {"%r", prints_revs},
		{"%R", prints_rot13}, {"%b", prints_bin},
		{"%u", prints_unsigned},
		{"%o", prints_oct}, {"%x", prints_hex}, {"%X", prints_HEX},
		{"%S", prints_exc_string}, {"%p", prints_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		mine_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
