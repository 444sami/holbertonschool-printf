#include "main.h"
/**
 * _spec - finds function to execute
 * @format: specifier passed
 * Return: function
 */
int (*_spec(const char format))(va_list)
{
	int iterador = 0;

	spec_t spec[] = {
		{'s', get_s},
		{'c', get_c},
		{'d', get_d},
		{'i', get_i},
		{'u', get_u},
		{'%', get_prc},
		{'\0', '\0'}
	};

	while (iterador < 6)
	{
		if ((spec[iterador]).e == format)
			return (spec[iterador].f);
		iterador++;
	}
	_putchar('%');
	_putchar(format);
	return (0);
}
