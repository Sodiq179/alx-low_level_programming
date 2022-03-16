#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{	int i; 
	for (i=1; i<=10; i++){
	char alpha;

	alpha = 'a';

	while (alpha<='z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');}
}
