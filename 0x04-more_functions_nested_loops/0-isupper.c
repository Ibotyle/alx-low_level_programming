/**
 * _isupper - access point to code
 * @c: character to check
 * 
 * Return: (1) if uppercase, (0) if not
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
