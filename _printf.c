#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to be printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int (*f)(va_list args);
	va_list args;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);

	for (count = 0; format[count] != '\0'; count++)
	{
			if (format[count] == '%' && format[count + 1] != '%')
				f = _spec(format[count + 1]);
			if (format[count] == '%' && format[count + 1] == '%')
				_putchar('%');
		_putchar(format[count]);
	}
	(void)f;
	va_end(args);
	return (count);
}
