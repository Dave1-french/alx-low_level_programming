#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char conc[100];

	conc[100] = dest + src;

	conc[100] = '\0';

	return (conc);

}
