#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch - 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	for (ch - 'A'; ch <= 'Z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
