#include <holberton.h>
/**
 *_strcpy - copy string pointed too
 *@dest:destination
 *@src: source
 *Return:To dest
 */
char *_strcpy(char *dest, char *src)
{
int n;
for (n = 0; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n] = '\0';
return (dest);
}
