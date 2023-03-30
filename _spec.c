#include "main.h"
/**
 * _spec - finds function to execute
 * @s: specifier passed
 */
int (*_spec(const char format))(va_list)
{
	int iterador = 0;

	spec_t spec[] = {
		{'s', get_s},
		{'c', get_c},
		{'d', get_d},
		{'i', get_i},
		{'\0', '\0'}
	};
	
	while (iterador < 4)
	{
		if ((spec[iterador]).e == format)
			return (spec[iterador].f);
		iterador++;
	}
	return (0);
}
