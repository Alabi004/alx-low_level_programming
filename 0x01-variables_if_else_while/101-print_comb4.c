#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i= '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < K)
				{
					putchar(c);
					putchar(i);
					putchar(K);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return(0);
}
