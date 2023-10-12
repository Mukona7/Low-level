#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;


    ptr = malloc(b);

    printf("Allocation size: %u\n", b);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(98);
    }

    return ptr;
}
