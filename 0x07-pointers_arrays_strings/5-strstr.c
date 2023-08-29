#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The input string.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if not
 * found.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
