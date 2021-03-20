#include <stdio.h>

/**
  * main - prints the numbers from 00 to 99
  *
  * Return: 0 on success;
  */
int main(void)
{
	int digit_one;
	int digit_two;

	for (digit_one = 0; digit_one <= 9; digit_one++)
	{
		for (digit_two = 0; digit_two <= 9; digit_two++)
		{
			putchar((digit_one % 10) + '0');
			putchar((digit_two % 10) + '0');
			if (digit_one != 9 || digit_two != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
