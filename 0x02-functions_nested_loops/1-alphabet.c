#include "main.h"

/**
 * main - prints all lowercase alphabet
 */

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++);
	{
		_putchar(letter);

	}
	_putchar('\n');
}

