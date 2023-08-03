#ifndef MAIN_H
#define MAIN_H

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: The string containing the binary number.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n);

/**
 * get_bit - Returns the value of a bit at an index in a decimal number.
 * @n: The number to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets a bit at a specified index in a decimal number.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 on success, or -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Clears a bit at a specified index in a decimal number.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, or -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Counts the number of bits needed to flip from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(const char *s);

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to write.
 *
 * Return: On success, returns the character written. On failure, returns -1.
 */
int _putchar(char c);

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);

#endif
