#include <holberton.h>
/**
 *_strcat - compares
 *@dest:first
 *@src:second
 *Return:difrence
 */
char *_strcat(char *dest, const char *src)
{
_strcpy(dest + _strlen(dest), src);
return (dest);
}
