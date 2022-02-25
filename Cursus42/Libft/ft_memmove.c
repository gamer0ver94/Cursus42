
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t size)
{
size_t i;
char *destination;
char *source;

destination = (char*)dest;
source = (char*)src;

while(i < size)
{
    destination[i] = source[i];
}
return (dest);
}
//done