#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments received
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number;

	for (number = 0; number < argc; number++)
	{
		printf("%s\n", argv[number]);
	}
	return (0);
}
