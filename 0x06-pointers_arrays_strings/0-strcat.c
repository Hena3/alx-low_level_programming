#include "main.h"
/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed by @dest
 * @src: string to be concatenated upon
 * @dest: string that will be appended
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i;
while (dest[len])
len++;
for (i = 0; src[i] != 0; i++)
dest[len] = src[i];
return (dest);
}
