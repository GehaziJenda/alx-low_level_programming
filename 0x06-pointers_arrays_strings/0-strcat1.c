#include "main.h"

char *_strcat(char *dest, char *src)
{
	char* result = dest;

    /* Find the end of the destination string*/
    while (*dest != '\0') {
        dest++;
    }

    /* Append the source string to the destination string*/
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    /*Add a null terminator to the end of the concatenated string*/
    *dest = '\0';

    return result;
}
