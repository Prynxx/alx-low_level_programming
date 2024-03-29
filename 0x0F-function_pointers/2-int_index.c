#include "function_pointers.h"

/**
 * int_index - searches for an int in an array
 * @array: array to search for int
 * @size: size of the array
 * @cmp: pointer to function that compares values
 * Return: index of the array element that is a match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}	
