#include "main.h"

/**
 *rev_string- function that reverses a string
 *@s: string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int som = 0;
	int i;

	while (s[som] != '\0')
		som++;

	for (i = 0; i < som; i++)
	{
		som--;
		rev = s[i];
		s[i] = s[som];
		s[som] = rev;
	}
}

