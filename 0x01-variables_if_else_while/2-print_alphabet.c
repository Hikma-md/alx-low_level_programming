#include <stdio.h>

/**
 * main - prints lower case letters
 *
 * Return: 0
 */
int main(void)
{
	char alpha[26] = " abcdefghijklmnopqrstuvwxyz";
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}
