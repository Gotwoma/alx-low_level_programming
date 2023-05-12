#include "main.h"
#include <stdio.h>
/**
 * main - print number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: array of string
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
