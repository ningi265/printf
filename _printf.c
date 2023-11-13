#include "main.h"
#include <string.h>
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

	while (format[i] != '\0')
	{
		
		for (j = 0; j < 14; j++)
		{
			if (strncmp(p[j].ph, &format[i], 2) == 0)
			{
				length += p[j].function(args);
				i += 2;
				break;
			}
		}
		if (j == 14)
		{
			mine_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(args);
	return (length);
}
