#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define RED printf("\033[0;31m");
#define BLUE printf("\033[0;34m");
#define GREEN printf("\033[0;32m");
#define RESET printf("\033[0m");

/**
 * output - check expected and obtained code.
 * Return: 0 for success, 1 for error.
 */
int output(int a, int b)
{
	printf("\n");
	if (a == b)
	{
		GREEN;
		printf("Success: %d chars printed.", a);
		RESET;
		return (0);
	}
	RED;
	printf("Error: expected %d, obtained %d.", a, b);
	RESET;
	return (1);
}
/**
 * main - test collection for _printf.
 * Return: nothing
 */
int main(void)
{
	int a, b, cont = 0;
	BLUE;
	printf("\nTEST WITHOUT ARGUMENTS:\n\n");
	RESET;
	printf("Test 6");
	printf("\nexpected: ");
	a = printf("%%s%");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%%s%");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	printf("Test 9");
	printf("\nexpected: ");
	a = printf("%%s%%r%1buelaaaaaas%%s%%%%%%%%%%sali de %k");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%%s%%r%1buelaaaaaas%%s%%%%%%%%%%sali de %k");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	printf("Test 10");
	printf("\nexpected: ");
	a = printf("%N&&S%%s%%ID%%");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%N&&S%%s%%ID%%");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	a = printf("%%%s%%%", "No me quiero ir Sr. Stark :(");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%%%s%%%", "No me quiero ir Sr. Stark :(");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	printf("Test 24");
	printf("\nexpected: ");
	a = printf("%s%", "sabeloko");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%s%", "sabeloko");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	if (cont == 0)
	{
		GREEN;
		printf ("\n\n30 CASES CHECKED, 0 ERRORS.\n\n");
		RESET;
	}
	else
	{
		RED;
		printf ("\n\n30 CASES CHECKED, %d ERRORS.\n\n", cont);
		RESET;
	}
	return (cont);
}

