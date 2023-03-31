#include "main.h"
/**
 * get_u - selects a number option
 * @args: Argument
 * Return: number of characters
 */
int get_u(va_list args)
{
	unsigned int i;
	int div = 1;
	int count = 0;
	unsigned int num;

	i = va_arg(args, int);
	num = i;
	while (num / div > 9)
		div = div * 10;
	while (div != 0)
	{
		count += _putchar((num / div) + '0');
		num = num % div;
		div = div / 10;
	}
	return (count);
}
