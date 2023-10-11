#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element for which cmp function does not return 0.
 * If no element matches, return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        int i;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
                return i;
        }
    }
    return -1;
}
