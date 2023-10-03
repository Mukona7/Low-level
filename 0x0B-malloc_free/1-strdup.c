#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    size_t length;
    char *duplicate;

    if (str == NULL) {
        return NULL;
    }

    /* Calculate the length of the input string */
    length = strlen(str) + 1;

    duplicate = (char *)malloc(length * sizeof(char));
    if (duplicate == NULL) {
        return NULL;  /* Memory allocation failed */
    }

    strcpy(duplicate, str);

    return duplicate;
}
