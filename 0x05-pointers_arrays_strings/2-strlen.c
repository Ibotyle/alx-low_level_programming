/**
 * _strlen - returns length of string
 * @s: a pointer that points to the first item of a string
 * Returns: string length
 *
 */
int _strlen(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
