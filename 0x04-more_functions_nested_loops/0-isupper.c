#include "main.h"

int _isupper(int c)
{
    if (!isascii(c))
        return 0; // Not a valid ASCII character

    if (isupper(c))
        return 1; // Uppercase character

    return 0; // Not an uppercase character
}

