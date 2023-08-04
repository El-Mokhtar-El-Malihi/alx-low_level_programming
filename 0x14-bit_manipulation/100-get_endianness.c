#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    // Create an integer with the value 1
    int num = 1;

    // Get the first byte of the integer using bitwise AND with 0xFF
    // This will give us the least significant byte
    char *ptr = (char *)&num;

    // Check if the value of the least significant byte is 1
    // If it is 1, the system is little endian, otherwise, it is big endian
    if (*ptr == 1)
        return 1; // Little endian
    else
        return 0; // Big endian
}

