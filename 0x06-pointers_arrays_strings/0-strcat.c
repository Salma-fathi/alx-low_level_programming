#include <stdio.h>

char *_strcat(char *dest, const char *src)
{
    char *ptr = dest;

    while (*ptr != '\0')
        ptr++;

    for (; *src != '\0'; src++, ptr++)
        *ptr = *src;

    *ptr = '\0';

    return dest;
}
