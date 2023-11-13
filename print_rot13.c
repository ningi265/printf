#include "main.h"
/**
 * prints_rot13 - convert to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int prints_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (s[i] == al[j])
			{
				mine_putchar(bl[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			mine_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
