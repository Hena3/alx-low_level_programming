#include "main.h"
/**
 * _put -> this is a function that puts
 * @str: a param to _put function
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
