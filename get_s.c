#include "main.h"
/**
 * get_s - prints a string
 * @args: arguments
 * Return: lenght of string
 */
int get_s(va_list)
{
	int iterador = 0;
	int count = 0;
	char *str = NULL;

	str = va_arg(args, char *);

	while (str[iterador])
	{
		_putchar(str[i]);
		count++;
		iterador++;
	}
	return (count);
}
