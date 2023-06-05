#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (sucess)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *p = needle;

		while (*o == *p && *p != '\0')
		{
			o++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

