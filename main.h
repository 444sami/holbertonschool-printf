#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct spec - structure specifiers and functions
 * @e - specifier
 * @f - function
 */
typedef struct spec
{
	char e;
	int (*f)(va_list);
} spec_t;

int (*_spec(const char format))(va_list);
int get_s(va_list args);
int get_c(va_list args);
int get_d(va_list args);
int get_i(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
