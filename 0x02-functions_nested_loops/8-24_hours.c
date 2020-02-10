#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hour = 0;
int minute;
while (hour < 24)
{
minute = 0;
while (minute < 60)
{
_putchar ((hour / 10) + '0');
_putchar ((hour % 10) + '0');
_putchar (':');
_putchar ((minute / 10) + '0');
_putchar ((minute % 10) + '0');
_putchar ('\n');
minute++;
}
hour++;
}
}
