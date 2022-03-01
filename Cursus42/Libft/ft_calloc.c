#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *pointer;
   pointer = (void)malloc(nitems * size); 
   if(pointer == null)
   {
        return (0);
   }
   return(nitems);
}