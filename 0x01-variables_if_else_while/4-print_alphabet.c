#include <stdio.h>

/**
  * main - prints the alphabet in lowercase except q and e
  *
  * Return: 0 on success.
  */
int main(void)
{
	char lower_alpha;

	lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		if (lower_alpha != 'q' && lower_alpha != 'e')
			putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');

	return (0);
}
