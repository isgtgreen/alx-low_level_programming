#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
