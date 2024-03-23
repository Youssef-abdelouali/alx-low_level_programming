#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_char - finds the biggest number
 *
 * @username: username
 * @length: length of username
 * Return: the biggest number
 */
int find_largest_char(char *username, int length)
{
	int largest;
	int index;
	unsigned int rand_num;

	largest = *username;
	index = 0;

	while (index < length)
	{
		if (largest < username[index])
			largest = username[index];
		index += 1;
	}

	srand(largest ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - multiplies each char of username
 *
 * @username: username
 * @length: length of username
 * Return: multiplied char
 */
int multiply_chars(char *username, int length)
{
	int product;
	int index;

	product = 0;
	index = 0;

	while (index < length)
	{
		product = product + username[index] * username[index];
		index += 1;
	}

	return (((unsigned int)product ^ 239) & 63);
}

/**
 * generate_random_char - generates a random char
 *
 * @username: username
 * Return: a random char
 */
int generate_random_char(char *username)
{
	int random_char;
	int index;

	random_char = index = 0;

	while (index < *username)
	{
		random_char = rand();
		index += 1;
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, index;
	long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];
	/* ----------- f2 ----------- */
	index = 0;
	while (index < length)
	{
		keygen[1] = ((char *)alphabet)[(keygen[1] + argv[1][index]) ^ 79 & 63];
		index += 1;
	}
	/* ----------- f3 ----------- */
	index = 0;
	while (index < length)
	{
		keygen[2] = ((char *)alphabet)[(keygen[2] * argv[1][index]) ^ 85 & 63];
		index += 1;
	}
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alphabet)[find_largest_char(argv[1], length)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alphabet)[multiply_chars(argv[1], length)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alphabet)[generate_random_char(argv[1])];
	keygen[6] = '\0';
	for (index = 0; keygen[index]; index++)
		printf("%c", keygen[index]);
	return (0);
}
