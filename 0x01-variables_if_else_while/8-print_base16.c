#include <stdio.h>

/**
  * main - Prints all the numbers of base 16 in lowercase
  *
  * Return: 0 on success.
  */
int main(void)
{
	char lower_case;
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');
	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
		putchar(lower_case);
	putchar('\n');

	return (0);
}
