/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: the string to add to dest
 *
 * Return: array of chars
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[y])
		y++;

	while (src[x])
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	return (dest);

}
