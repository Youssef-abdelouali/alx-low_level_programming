#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_char - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int find_largest_char(char *usrn, int len)
{
    int character;
    int index;
    unsigned int rand_num;

    character = *usrn;
    index = 0;

    while (index < len)
    {
        if (character < usrn[index])
            character = usrn[index];
        index += 1;
    }

    srand(character ^ 14);
    rand_num = rand();

    return (rand_num & 63);
}

/**
 * multiply_chars - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int multiply_chars(char *usrn, int len)
{
    int character;
    int index;

    character = index = 0;

    while (index < len)
    {
        character = character + usrn[index] * usrn[index];
        index += 1;
    }

    return (((unsigned int)character ^ 239) & 63);
}

/**
 * generate_random_char - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int generate_random_char(char *usrn)
{
    int character;
    int index;

    character = index = 0;

    while (index < *usrn)
    {
        character = rand();
        index += 1;
    }

    return (((unsigned int)character ^ 229) & 63);
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
    int len, character, index;
    long alph[] = {
        0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
        0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
        0x723161513346655a, 0x6b756f494b646850 };
    (void)argc;

    for (len = 0; argv[1][len]; len++)
        ;
    /* ----------- f1 ----------- */
    keygen[0] = ((char *)alph)[(len ^ 59) & 63];
    /* ----------- f2 ----------- */
    character = index = 0;
    while (index < len)
    {
        character = character + argv[1][index];
        index = index + 1;
    }
    keygen[1] = ((char *)alph)[(character ^ 79) & 63];
    /* ----------- f3 ----------- */
    character = 1;
    index = 0;
    while (index < len)
    {
        character = argv[1][index] * character;
        index = index + 1;
    }
    keygen[2] = ((char *)alph)[(character ^ 85) & 63];
    /* ----------- f4 ----------- */
    keygen[3] = ((char *)alph)[find_largest_char(argv[1], len)];
    /* ----------- f5 ----------- */
    keygen[4] = ((char *)alph)[multiply_chars(argv[1], len)];
    /* ----------- f6 ----------- */
    keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
    keygen[6] = '\0';
    for (index = 0; keygen[index]; index++)
        printf("%c", keygen[index]);
    return (0);
}
