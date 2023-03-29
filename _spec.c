#include "main.h"
/**
 * _spec - finds function to execute
 * @s: specifier passed
 */
int (*_spec(char *s))(va_list)
{
	int iterador = 0;

	spec_t spec[] = {
		{'s', get_s},
		{'c', get_c},
		{'d', get_di},
		{'i', get_di},
		{'%', get_prc},
		{'\0', '\0'}
	};
	
	while (iterador < 5)
	{
		if (*(spec[iterador]).e == *s)
			break;
		iterador++;
	}
	return (spec[iterador].f);
}
