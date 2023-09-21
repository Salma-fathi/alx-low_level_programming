#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
    char *ptr = dest;
    
    while (*ptr != '\0')
        ptr++;
    
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    
    *ptr = '\0';
    
    return dest;
}
