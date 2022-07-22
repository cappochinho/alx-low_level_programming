#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int high = 0x01;

	while (high <= xor)
	{
		if (high & xor)
			flips++;
		high <<= 1;
	}
	return (flips);
}
