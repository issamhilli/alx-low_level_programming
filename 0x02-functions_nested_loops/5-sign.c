1 #include "main.h"
2
3 /**
4  * print_sign - determines if the input number
5  * greater, iqual or less than zero.
6  *
7  * @n: The input number as an integer.
8  *
9  * Return: 1 is greater than zero. 0 is zero
10 * -1 is less than zero.
11 */
12 int print_sign(int n)
13 {
14     	if (n > 0)
15     	{
16		_putchar(43);
17		return (1);
18	}
19       	else if (n < 0)
20	{
21		_putchar(45);
22		return (-1);
23	}
24       	else 
25	{
26		_putchar(48);
27		return (0);
28	}
29	_putchar('\n');
30 }
