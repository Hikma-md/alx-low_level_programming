#include "main.h"
/**
 * main - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int rt, ch;
	
	for (rt =0; rt <= 9; rt++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		-putchar('\n');
	}
	
}
