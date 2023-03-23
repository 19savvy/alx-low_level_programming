#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each of the elements of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: function to be carried out through the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action == NULL || array == NULL)
		return;

	for (int i = 0; i < size; i++)
		action(array[i]);
}