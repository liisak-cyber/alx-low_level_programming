#include "main.h"
#include <stdlib.h>

/**
 *  * create_array - creates an array of chars
 *   * @size: the size of the array
 *    * @c: initial value
 *     *
 *      * Description: This function creates an array of characters of size `size`
 *       * and initializes each element with the character `c`.
 *        *
 *         * Return: A pointer to the array, or NULL if it fails
 *          */
char *create_array(unsigned int size, char c)
{
		char *array;
			unsigned int i;

				if (size == 0)
							return (NULL);

					array = (char *)malloc(sizeof(char) * size);
						if (array == NULL)
									return (NULL);

							for (i = 0; i < size; i++)
										array[i] = c;

								return (array);
}
