#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	int endian;

	endian = i >> sizeof(int) & 1 ? 0 : 1;

	return (endian);
}
