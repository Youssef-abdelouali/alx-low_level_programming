# 0x0F. C - Function pointers
## Tasks: 

0. What's my name


_Write a function that prints a name._

```sh
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The string to print.
 * @f: A pointer to the function responsible for printing the name.
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

```

1. If you spend too much time thinking about a thing, you'll never get it done

_Write a function that prints a name._

```sh
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate through.
 * @size: The number of elements in the array.
 * @action: A pointer to the function that processes each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
```
2. To hell with circumstances; I create opportunities

_Write a function that searches for an integer._

```sh
#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element for which the comparison
 * function returns true.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to be used.
 *
 * Return: The index of the first element for which the comparison function
 * returns true. If no element matches or if array is NULL, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (array == NULL || size <= 0 || cmp == NULL)
        return -1;

    while (i < size)
    {
        if (cmp(array[i]))
            return i;
        i++;
    }

    return -1;
}

```
3. A goal is not always meant to be reached, it often serves simply as something to aim at

_Write a program that performs simple operations._

3-main.c
```sh
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple arithmetic operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

```
3-op_functions.c
```sh
#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number (non-zero).
 *
 * Return: The quotient of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

```
3-get_op_func.c
```sh
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},  /* Add operator */
		{"-", op_sub},  /* Subtract operator */
		{"*", op_mul},  /* Multiply operator */
		{"/", op_div},  /* Divide operator */
		{"%", op_mod},  /* Modulo operator */
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

```
3-calc.h
```sh
#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;               /* The operator. */
	int (*f)(int a, int b); /* The associated function. */
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

```

4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker


_Write a program that prints the opcodes of its own main function._

```sh
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

```




















