#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 * Return: returns poiner to @dest
 */

void *_memset(void *s, int c, size_t n)                                                                                              
{                                               
   	unsigned int index;                                         
	unsigned char *memory = s, value = c;      
	for (index = 0; index < n; index++)                          
		memory[index] = value;    
	return (memory);                                                       
}

