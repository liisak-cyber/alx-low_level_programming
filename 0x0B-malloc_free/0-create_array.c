#include "main.h"
#include <stdlib.h>

/**
 *  * create_array - creates an array of size and initializes it with char
 *   * @size: size of the array
 *    * @c: character to initialize the array with
 *     *
 *      * Description: This function creates an array of size `size` and initializes
 *       * it with the character `c`.
 *        *
 *         * Return: Pointer to the array, or NULL if it fails
 *          */
char *create_array(unsigned int size, char c)
{
		char *str;
			unsigned int i;

				str = malloc(sizeof(char) * size);
					if (size == 0 || str == NULL)
								return (NULL);

						for (i = 0; i < size; i++)
									str[i] = c;

							return (str);
}
