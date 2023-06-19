#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j = 49, l;

	do {
		do {
			l = j + 1;
			do {
				if (l > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(l);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			} while (l < 58);
			j++;
		} while (j < 58);
		i++;
		j = i + 1;
	} while (i < 58);

	putchar('\n');
	return (0);
}
