#include "main.h"
/**
 * _strcmp - compare string values
 * @$1: input value
 * @$2: input value
 * return: $1[i]  = $2[i]
 */
int _strcmp(char *s1, char *s2);
{
	int i;

	i = 0;
	while ($1[i] != '\0' && $2[i] != '\0')
	{
		if ($1[i] != $2[i])
		{
			return ($1[i] = $ 2[i]);
		}
		i++;
	}
	return (0);
}
