#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character in stdout
 * @C: the character to print
 *
 * Return: on success 1.
 * On error, -1 is returned and errno is set approaprietly
 */
int putchar(char c)
{
return (write(1, &c, 1));
}
