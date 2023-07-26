#include "main.h"

/**
 * *_strcpy - copies a string pointed to by src
 * @dest: destination
 * @src: source
 * Return: dest buffer
 */


char *_strcpy(char *dest, char *src) {
    char *dest_start = dest; // Store the starting address of the destination buffer

    // Copy characters from src to dest until the null terminator is encountered
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // Add the null terminator to the destination buffer
    return dest_start; // Return the starting address of the destination buffer
}
