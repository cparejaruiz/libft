#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    
    int i = 0;
    int j = 0;
    while (dest[j] != '\0') j++;

    while (i < dstsize - 1 && src[i] != '\0')
    {
        dest[j+1] = src[i];
        i++;
    }

    dest[j + i] = '\0';

    // Devuelve la longitud total de la cadena concatenada
    return i + j;
    }

int main(void) {
    // Prueba 1: Uso de la función personalizada ft_strlcat
    char dest1[20] = "Hola, ";
    const char *src1 = "mundo!";
    size_t size1 = 20;

    printf("Antes de ft_strlcat: %s\n", dest1);
    ft_strlcat(dest1, src1, size1);
    printf("Después de ft_strlcat: %s\n", dest1);

    // Prueba 2: Uso de la función estándar strlcat
    char dest2[20] = "Hola, ";
    const char *src2 = "mundo!";
    size_t size2 = 20;

    printf("Antes de strlcat: %s\n", dest2);
    strlcat(dest2, src2, size2);
    printf("Después de strlcat: %s\n", dest2);

    // Prueba 3: Comparación con un tamaño menor al necesario
    char dest3[10] = "Hola, ";
    const char *src3 = "mundo!";
    size_t size3 = 10;

    printf("Antes de ft_strlcat (tamaño 10): %s\n", dest3);
    ft_strlcat(dest3, src3, size3);
    printf("Después de ft_strlcat (tamaño 10): %s\n", dest3);

    char dest4[10] = "Hola, ";
    const char *src4 = "mundo!";
    size_t size4 = 10;

    printf("Antes de strlcat (tamaño 10): %s\n", dest4);
    strlcat(dest4, src4, size4);
    printf("Después de strlcat (tamaño 10): %s\n", dest4);

    return 0;
}
