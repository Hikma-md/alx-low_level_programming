#include <stdio.h>
/*
 * main - printts lower case alphabet with out q and e
 *
 * Return: 0
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int j;
	for (j = 1; j < 26; j++)
	{
		if (j != 4 && j != 16)
		{
			putchar(alpha[j]);
		}
	}
	putchar('\n');
	return (0);
}
