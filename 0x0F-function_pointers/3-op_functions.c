#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - the sum of a and b
 * @a: num 1
 * @b: num 2
 * Return: the sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - diference of a and b
 * @a: num1
 * @b: num 2
 * Return: the diference
 */
int op_sub(int a, int b)
{

	int dif;

	dif = a - b;
	return (dif);
}


/**
 * op_mul - multiply a and b
 * @a: num1
 * @b: num2
 * Return: the product
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}


/**
 * int op_div - divide a and b
 * @a: num1
 * @b: num2
 * Return: the division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - mod of the division
 * @a: num1
 * @b: num2
 * Return: : returns the remainder of the division
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
