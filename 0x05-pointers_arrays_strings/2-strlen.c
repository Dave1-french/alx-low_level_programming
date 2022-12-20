#include "main.h"

/**
 *_strlen - function the length of a string
 *@s: string checked
 *Return: length
 */

int _strlen(char *s)
{
	int i = 0, som = 0;
	char len = s[0];

	while (len != '\0')
	{
		som++;
		len = s[i++];
	}

	return (som);
}
