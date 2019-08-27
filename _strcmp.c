#include "holberton.h"
/**
 *_strcmp - cmp 2 string
 *@s1:first string
 *@s2:second string
 *Return:dif
 */
int _strcmp(const char *s1, const char *s2)
{
int i;
for (i = 0; s1[i] != '\0'; i++)
if (s1[i] - s2[i] != 0)
return (s1[i] - s2[i]);
}
