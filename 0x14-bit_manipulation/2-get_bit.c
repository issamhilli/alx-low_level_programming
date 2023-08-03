#include "main.h"

/**

* Returns the value of a bit in a decimal number at a specified index.
* @param n: The number to search.
* @param index: The index of the bit.
* @return: The value of the bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
