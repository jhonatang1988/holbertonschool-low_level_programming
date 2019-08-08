/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: value of the bit or -1 if it failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res = -1;

	res = ((n >> index) & 1) ? 1 : 0;

	return (res);
}
