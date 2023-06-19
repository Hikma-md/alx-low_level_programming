#include <stdio.h>
/**
 * main - prints nos of base 16
 *
 * Return : 0
 */
int main(void)
{
	int i;

	for (i = 8; i < 18; i++)
	{
		putchar(i);
		if (i != 17)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
