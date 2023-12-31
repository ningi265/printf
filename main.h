#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int prints_pointer(va_list val);
int prints_unsigned(va_list args);
int prints_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int prints_HEX_extra(unsigned int num);
int prints_exc_string(va_list val);
int prints_HEX(va_list val);
int prints_hex(va_list val);
int prints_oct(va_list val);
int prints_bin(va_list val);
int prints_revs(va_list args);
int prints_rot13(va_list args);
int prints_i(va_list args);
int prints_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int prints_37(void);
int prints_c(va_list val);
int prints_s(va_list val);
int mine_putchar(char c);
int _printf(const char *format, ...);

#endif

