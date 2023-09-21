#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0;

	/* Calculate the lengths of the input strings */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can be stored in r */
	if (len1 >= size_r || len2 >= size_r)
		return 0;

	/* Perform the addition starting from the least significant digit */
	len1--;
	len2--;
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1] - '0';

		if (len2 >= 0)
			sum += n2[len2] - '0';

		carry = sum / 10;

		if (i >= size_r - 1)
			return 0;

		r[i] = (sum % 10) + '0';

		i++;
		len1--;
		len2--;
	}

	r[i] = '\0';

	/* Reverse the result string */
	for (int j = 0, k = i - 1; j < k; j++, k--)
	{
		char temp = r[j];
		r[j] = r[k];
		r[k] = temp;
	}

	return r;
}
