char *ft_strchr(const char *str, int c)
{
   int i;

   i = 0;
   while(str[i] != c && str[i] != '\0')
   {
       i++;
       if(str[i] == c)
       {
           return ((char*)str + i);
       }
   } 
   return (0);
}