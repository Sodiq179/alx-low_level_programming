#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: the number we are dealing with
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	return (n % 10);
}
