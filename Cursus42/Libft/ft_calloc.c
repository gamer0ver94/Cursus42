#include "libft.h"
//review at the end
void *ft_calloc(size_t nitems, size_t size)
{
    void *pointer;
   pointer = malloc(nitems * size); 
   if(pointer == NULL)
   {
        return (NULL);
   }
   return(pointer);
}