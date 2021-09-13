#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in a string pointed to by s   tring 11 of any charcter from the string ponted to by string 2.
 *
 * @s: The string pointer to be searched.
 * @accept: The string pointer to be searched for.
 *
 * Return: A pointer to the matched byte if a set is matched.
 *	   NULL if otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}

		s++;
	}
	return ('\0');
}
