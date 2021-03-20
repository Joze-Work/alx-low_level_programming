#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase
  *
  * Return: 0 on success.
  */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
