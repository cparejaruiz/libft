#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i = 0;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    
}



#include <stdio.h>

int main() {
    char dest[20] = "Hola, ";
    const char *src = "mundo!";
    size_t result;

    result = ft_strlcat(dest, src, sizeof(dest));

    printf("strlcat: Cadena resultante: %s\n", dest);
    printf("Longitud total: %zu\n", result);

    return 0;
}
