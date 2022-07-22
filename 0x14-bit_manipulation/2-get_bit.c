#include "main.h"

/**
 * get_bit - gets a bit at index
 * @n: number to find bit from
 * @index: The index at where bit resides
 * Return: value of the bit or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int high = 0x01;

	high <<= index;
	if (high == 0)
		return (-1);

	if ((n & high))
		return (1);
	else
		return (0);
}
