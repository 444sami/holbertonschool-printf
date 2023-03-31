#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to be printed
 * Return: count
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int iterador = 0;
	int (*f)(va_list args);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[iterador])
	{
		if (format[iterador] == '%')
		{
			f = _spec(format[iterador + 1]);
			if (f != NULL)
			{
				count += f(args);
			}
				iterador += 2;
		}
		else
		{
			_putchar(format[iterador]);
			count++;
			iterador++;
		}
	}
	va_end(args);
	return (count);
}
