#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int exclusive = n ^ m;

for (int i = 63; i >= 0; i--)
{
if ((exclusive >> i) & 1)
count++;
}

return count;
}