#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * Returns: the absolute value
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * n;
	else if (n >= 0)
		abs = n;

	return (abs);
}
	
