#include "main.h"

/**
 * main - print 1 to 100,
 * multiples of 3 with Fizz,
 * multiples of 5 with Buzz
 * and multiple of both 3 and 5 with FizzBuzz
 *
 * Return: 0 on success
 */

void print_triangle(int size)
{
	int height;

	int width;

	int draw;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
