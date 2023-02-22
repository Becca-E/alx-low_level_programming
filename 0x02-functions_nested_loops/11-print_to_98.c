#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: the starting number
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	Printf("98");
	_putchar('\n');
}
