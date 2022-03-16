#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;

	int j;

	int ans;

	for (i=0; i < 10; i++)
	{
		for (j=0; j < 10; j++)
		{
			ans = i * j;
			_putchar('0' + ans/10);
			_putchar('0' + ans % 10);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
