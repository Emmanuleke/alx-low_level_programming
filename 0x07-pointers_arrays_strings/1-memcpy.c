#include "main.h"
/**
 *_memcpy - this exicutes the code
 * @dest: this is the memory space to be copied into
 * @src: this is the  memory which is being copied
 * @n: the amount of space to be copied
 * Return:the value of src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
for (; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}
