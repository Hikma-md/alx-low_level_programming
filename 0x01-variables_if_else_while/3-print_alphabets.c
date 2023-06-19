#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j:
	for (j = 0; j < 52; j++) 
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}
