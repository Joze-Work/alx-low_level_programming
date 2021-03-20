#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, and then in uppercase
  *
  * Return: 0 on success.
  */
int main(void)
{
	char lower_alpha;
	char upper_alpha;

	lower_alpha = 'a';
	upper_alpha = 'A';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpha++;
	}
	putchar('\n');

	return (0);
}
