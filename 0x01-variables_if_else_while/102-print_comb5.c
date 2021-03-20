#include <stdio.h>

/**
  * main - Prints all possible combinations of two two-digit numbers.
  *
  * Return: 0 on success
  */
int main(void)
{
	int first_d1;
	int first_d2;
	int second_d1;
	int second_d2;

	for (first_d1 = 0; first_d1 <= 9; first_d1++)
	{
		for (first_d2 = 0; first_d2 <= 9; first_d2++)
		{
			for (second_d1 = 0; second_d1 <= 9; second_d1++)
			{
				for (second_d2 = 0; second_d2 <= 9; second_d2++)
				{
					if (first_d2 < second_d2)
					{
						putchar((first_d1 % 10) + '0');
						putchar((first_d2 % 10) + '0');
						putchar(' ');
						putchar((second_d1 % 10) + '0');
						putchar((second_d2 % 10) + '0');
						if (first_d1 != 9 || first_d2 != 8 || second_d1 != 9 || second_d2 != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
