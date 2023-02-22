#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the alphabet c to standout
 * @c: the alphabeth to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
