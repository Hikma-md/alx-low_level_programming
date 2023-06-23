#include "main.h"
#include <unistd.h>
/**
 * print character
 * Return: 2
 */
int _putchar(int char c)
{
	return (write(1, &c, 1));
}
