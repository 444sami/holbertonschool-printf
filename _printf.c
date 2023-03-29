#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to be printed
 */
int _printf(const char *format, ...)
{
	int iterador = 0;
	int count = 0;
	int (*f)(va_list args);
	va_list args;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);

	for (count = 0; count != '\0'; count++)
	{
		while (format[iterador])
		{
			if (format[iterador] == '%' && format[iterador + 1] != '%')
				f = _spec(&format[iterador + 1]);
			iterador++;
			if (format[iterador + 1] == '%')
				_putchar('%');
		}
	}
	(void)f;
	va_end(args);
	return (count);
}
