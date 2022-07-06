#include "main.h"
/**
 * jack_bauer -> prints 24 hours
 */
void jack_bauer(void)
{
int i, x;
for (i = 0; i < 24; i++)
{
for (x = 0; x < 60; x++)
{
if (i < 10)
{
_putchar('0');
_putchar(i + '0');
}
else if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (x < 10)
{
_putchar(':');
_putchar('0');
_putchar(x + '0');
}
else if (x >= 10)
{
_putchar(':');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
}
