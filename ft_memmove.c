#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (!dest && !src)
        return NULL;

    if (d > s)
    {
        d += n;
        s += n;
        while (n--)
        {
            *(--d) = *(--s);
        }
    }
    else
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }

    return dest;
}

/*
int main() {
    char src[] = "Hello, World!";
    char dest[20];

    memmove(dest, src, strlen(src) + 1); // Copia la cadena incluyendo el carácter nulo
    printf("Destino memmove: %s\n", dest); // Salida: "Destino: Hello, World!"
    
    

    char src2[] = "Bye, World!";
    char dest2[20];

    memmove(dest2, src2, strlen(src2) + 1); // Copia la cadena incluyendo el carácter nulo
    printf("Destino ft_memmove: %s\n", dest2); // Salida: "Destino: Hello, World!"
    
    return 0;
}
*/