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
	char *e;
	int (*f)(va_list);
} spec_t;

int _spec(char *s)(va_list);
int get_s(va_list);
int get_c(va_list);
int get_prc(va_list);
int get_di(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
