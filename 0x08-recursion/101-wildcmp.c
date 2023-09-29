#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
* wildcmp -compare strings
* @s1: -value of the first sting
* @s2: -value of the second sting
* Return: 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1)
|| wildcmp(s1 + 1, s2));
	}
	return (0);

}
