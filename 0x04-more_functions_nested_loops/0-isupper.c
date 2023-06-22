#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
    if (!isascii(c))
        return 0; 

    if (isupper(c))
        return 1; 

    return 0; 
}

