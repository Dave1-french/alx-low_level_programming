#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of char to be copied
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, add = 0;

	while (dest[add] != '\0')
	{
		add++;
	}
	while (i < n; src[i] != '\0')
	{
		dest[add] = src[i];
		add++;
		i++;
	}
	dest[add] = '\0';
	return (dest);

}
