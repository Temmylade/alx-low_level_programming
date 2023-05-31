#include "main.h"
/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;

	r[size_r - 1] = '\0';
	size_r--;

	while (i >= 0 || j >= 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		r[size_r - 1] = sum % 10 + '0';
		carry = sum / 10;

		i--;
		j--;
		size_r--;
	}

	if (carry > 0)
	{
		if (size_r == 0)
			return (0);

		r[size_r - 1] = carry + '0';
	}
	else if (size_r == 0)
		return (0);

	return (r + size_r);
}

/**
 * _strlen - Calculates the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

