#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	print("Size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
	print("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
	print("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
	print("Size of a float: %d byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
