#include <stdio.h>

/**
 * main - point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0, digit1;

	while (digit <= 9)
	{
		digit1 = 0;
		while (digit <= 9)
		{
			if (digit != digit1 && digit < digit1)
			{
				putchar(digit + 48);
				putchar(digit1 + 48);

				if (digit + digit1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit1++;
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
