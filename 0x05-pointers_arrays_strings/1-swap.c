/**
 * swap_int - swap integers
 * @a: integer to be swapped
 * @b: another interger to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *b;
	*b = *a;
	*a = y;
}
