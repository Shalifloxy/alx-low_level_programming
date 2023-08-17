
/**
 * _isdigit - function that check if it's a digit
 * @c: takes in a character/digit
 * Return: 1 if digit success and 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
