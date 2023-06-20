#include "main.h"
#include <unistd.h>
/**
 * print character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
