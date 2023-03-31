/**
 * _strncat - concats n from src to dest
 *
 * @dest: the first string
 * @src: string to concat to dest
 * @n: number of chars to take from src
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
