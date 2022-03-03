// Function Prototypes
#include <stddef.h>
#include <stdlib.h>

#include <stdio.h> //remove after
int ft_isalpha(int a); //done
int ft_isalnum(int a); //done
int ft_isdigit(int a); //done
int ft_isprint(int a); //done verify
size_t ft_strlen(const char *str); //done
int ft_isascii(int a); //done
void *ft_memset(void *str, int c, size_t n); //done
void ft_bzero(void *s, size_t n);//done
void *ft_memcpy(void *dest, const void *src , size_t n);//done
size_t ft_strlcat(char *dest, const char *src, size_t size);
void *ft_memmove(void *dest, const void *src, size_t size);
int ft_toupper(int ch); //done
int ft_tolower(int a); //done
char *ft_strchr(const char *str, int c); //done
char *ft_strrchr(const char *str, int c); //done
int ft_strncmp(const char *str1, const char *str2, size_t n); //done
void *ft_memchr(const void *str, int c, size_t n); // done
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strstr(const char *haystack, const char *needle);// not done 
int ft_atoi(const char *str);//done
void *ft_calloc(size_t nitems, size_t size); //review
char *ft_strdup(const char *string); //need review function might have a problem with ft_strlen
char *ft_substr(char const *s, unsigned int start, size_t len);
size_t ft_strlcpy(char* dest, const char*src, size_t destsize);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);