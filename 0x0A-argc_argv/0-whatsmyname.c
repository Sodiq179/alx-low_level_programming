#include <stdio.h>
#include "main.h"

/**
 * main - prints out the file name
 * @argc: the argument count
 * @argv: the argument vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n",argv[0]);
	}
	return (0);
}
