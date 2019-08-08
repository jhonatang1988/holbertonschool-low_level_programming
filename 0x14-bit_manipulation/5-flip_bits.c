#include "holberton.h"
/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to the other
 *
 * @n: initial number
 * @m: second number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int flips = 0;
	unsigned int bitm;
	unsigned int bitn;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		bitn = ((n >> i) & 1) ? 1 : 0;

		bitm = ((m >> i) & 1) ? 1 : 0;

		if (bitn != bitm)
		{
			flips++;
		}
	}

	return (flips);
}
