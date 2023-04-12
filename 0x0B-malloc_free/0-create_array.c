#include <stdlib.h>

/**
 *create_array - creates an array of chars & initializes  with a specific char.
 *@size: size of the array to be created.
 *@c: specific char to initialize the array with.
 *Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
{
	return (NULL);
}

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
{
	return (NULL);
}

	for (unsigned int i = 0; i < size; i++)
{
	arr[i] = c;
}

	return (arr);
}
