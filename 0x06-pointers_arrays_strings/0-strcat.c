#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, add = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[add] = src[i];
		add++;
	}
	return (dest);

}
