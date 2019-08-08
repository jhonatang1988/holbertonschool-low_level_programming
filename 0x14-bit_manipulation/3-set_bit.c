/**
 * set_bit - sets the value of 1 at a given index
 *
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	*n =  *n | (1 << index);

	return (1);
}
