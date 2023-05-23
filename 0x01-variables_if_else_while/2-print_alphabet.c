#include <stdio.h>
/**
 * main - entry point
 * description: 'print alphsbets lowercase'
 * Return: always 0 (zero)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
