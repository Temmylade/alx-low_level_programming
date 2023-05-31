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
	int len1, len2, len_sum, carry, sum;
	int i, j, k;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	len_sum = (len1 > len2 ? len1 : len2) + 1;

	r[len_sum] = '\0';

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = len_sum - 1;

	while (i >= 0 || j >= 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';

		if (j >= 0)
			sum += n2[j--] - '0';

		r[k--] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (carry > 0)
		r[k] = carry + '0';
	else
		k++;

	if (len_sum - k > size_r)
		return (0);

	return (&r[k]);
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
