#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capitalize = true;

	/* Iterate through each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a word separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize = true;
		}
		/* Check if the character is a lowercase letter */
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 32;
			capitalize = false;
		}
		else
		{
			capitalize = false;
		}

		i++;
	}

	return (str);
}
