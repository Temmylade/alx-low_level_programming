#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aeotl";
	char *leet_nums = "43071";

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through the letters array */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* Check if the current character matches a letter in the array */
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				/* Replace the letter with the corresponding leet number */
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}
