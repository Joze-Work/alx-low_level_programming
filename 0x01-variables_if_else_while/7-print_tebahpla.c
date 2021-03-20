#include <stdio.h>

/**
  * main - prints the lowercase alphabet in reverse.
  *
  * Return: 0 on success.
  */
int main(void)
{
	char lower_alpha;

	for (lower_alpha = 'z'; lower_alpha >= 'a'; lower_alpha--)
		putchar(lower_alpha);
	putchar('\n');

	return (0);
}
