#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t count;
    int diff;

    count = 0;
    diff = 0;
    if(!n)
        return (0);
    while (str1[count] != '\0' && str2[count] != '\0' && diff == 0 &&count < n - 1)
    {
        diff = str1[count] - str2[count];
        count++;
    }
    return (diff);
}

/* int main () {
   char str1[7] = "ABCdEF";
   char str2[7] = "ABcDEF";
   int ret;

   ret = ft_strncmp(str1, str2, 4);
   ret = strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
} */