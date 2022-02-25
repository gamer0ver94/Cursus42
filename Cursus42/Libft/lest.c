#include <stdio.h>
#include <string.h>

void ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t    i;
    char *tcdest;
    char *tcsrc;

    tcdest = (char*)dest;
    tcsrc = (char*)src;

    i = 0;

    while(i < n)
    {
        tcdest[i] = tcsrc[i];
        i++;
    }
}

int main() {
  char dest[50] = "letancy";
  char src[50] = "bonjour";
  strlcat(dest,src,9);
  printf("%s", dest);
  return 0;
}
