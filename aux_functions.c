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
                _putchar(str[iterador]);
                iterador++;
        }
        return (iterador);
}

/**
 * get_c - Print a Character
 * @args: Arguments
 * Return: 1
 */
int get_c(va_list)
{
        _putchar(va_arg(int));
        return (1);
}

/**
 * get_d - selects a number option
 * @args: Argument
 * Return: number of characters
 */
int get_d(va_list)
{
        int i;
        int div = 1;
        int count = 0;
        unsigned int num;
        i = va_arg(int);
        if (i < 0)
        {
                counter += _putchar('-');
                num = i * -1;
        }
        else
        {
                num = i;
        }
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

/**
 * get_i - selects a number option
 * @args: Argument
 * Return: number of characters
 */
int get_i(va_list)
{
        int i;
        int div = 1;
        int count = 0;
        unsigned int num;
        i = va_arg(int);
        if (i < 0)
        {
                counter += _putchar('-');
                num = i * -1;
        }
        else
        {
                num = i;
        }
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
