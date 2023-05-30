#include "main.h"
#include <unistd.h>
/**
 * _strlen -returns the length of a strin
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
