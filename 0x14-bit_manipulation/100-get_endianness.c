#include "main.h"

/**
 
 * Checks the endianness of a machine.
 * @return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
