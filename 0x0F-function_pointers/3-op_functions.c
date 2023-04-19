#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds 5 functions
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */

int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - subtracts
 * @a: first int
 * @b: second int
 * Return: difference
 */

int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - multiplies
 * @a: first int
 * @b: second int
 * Return: multiply
 */

int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - division
 * @a: first int
 * @b: second int
 * Return: division
 */

int op_div(int a, int b) { return (a * b); }

/**
 * op_mod - modulo
 * @a: first int
 * @b: second int
 * Return: Modulo
 */

int op_mod(int a, int b) { return (a % b); }
