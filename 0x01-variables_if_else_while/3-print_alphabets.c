#include <stdio.h>
/**
 * main - Entry point
 * description: printing of upper and lower case aphabets
 * Return: always 0 (zero)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
