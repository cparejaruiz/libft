#include "libft.h"
 
void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr = str; 
    while (n--) { 
        *ptr++ = (unsigned char)c; 
    }
    return str; 
}

/*
int main(void)
{
   char str[] = "Hola, mundo";
    printf("Antes de memset: %s\n", str);

    memset(str, '*', 5);
    printf("Después de memset: %s\n", str);

   char str2[] = "Hola, mundo";
    printf("Antes de ft_memset: %s\n", str2);

    ft_memset(str2, '*', 5);
    printf("Después de ft_memset: %s\n", str2);
}
*/ 