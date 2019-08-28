#include <holberton.h>
/**
 *_strcpy - copy string pointed too
 *@dest:destination
 *@src: source
 *Return:To dest
 */
char *_strcpy(char *dest, char *src)
{
	int n, t;

	for (n = 0; src[n] != '\0'; n++)
		;
	for (t = 0; t <= n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
