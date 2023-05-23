#include <stdio.h>
/**
 * main - entry point
 * description: printing of alphabet with some leters ommited
 * Return: always  0 zero
 */
int main(void)
{
	int n = 97;
	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
