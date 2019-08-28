#include "holberton.h"
/**
 *_strcmp - cmp 2 string
 *@s1:first string
 *@s2:second string
 *Return:dif
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
