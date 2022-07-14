#include "main.h"
#include<string.h>
/**
 * _strncat -> function to append some charx
 * @dest: first param
 * @src: secomd param
 * @n: 3rd param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
c++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];
dest[c + i] = '\0';
return (dest);
}
