#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: integer value.
 * @b: integer value.
 *
 * Return: a+b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: integer value.
 * @b: integer value.
 *
 * Return: a-b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b;
 * @a: integer value.
 * @b: integer value.
 *
 * Return: a*b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of a and b;
 * @a: integer value.
 * @b: integer value.
 *
 * Return: a/b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns a modulus of a/b;
 * @a: integer value.
 * @b: integer value.
 *
 * Return: modulus of a/b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
