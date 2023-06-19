#include <stdio.h>

/**
 * main - point
 *
 * Description: write a program that prints all possible
 * different combinations of two digits
 * Return: 0
*/

int main(void)
{
	int firstDigit = 0, sDigit;

	while (firstDigit <= 99)
	{
		sDigit = firstDigit;
		while (sDigit <= 99)
		{
			if (sDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((sDigit / 10) + 48);
				putchar((sDigit % 10) + 48);

				if (firstDigit != 98 || sDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
