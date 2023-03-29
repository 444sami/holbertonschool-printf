#include "main.h"
/**
 * _spec - finds function to execute
 * @s: specifier passed
 */
int _spec(char *s)(va_list)
{
	int iterador = 0;

	spec_t spec[] = {
		{"s", get_s},
		{"c", get_c},
		{"d", get_di},
		{"i", get_di},
		{"%", get_prc}
		{NULL, NULL}
	};
	
	while (spec[i].e)
	{
		if (*s == spec[i].e)
		{
			return (spec[i].f);
		}
		iterador++;
	}
	return (0);
}
