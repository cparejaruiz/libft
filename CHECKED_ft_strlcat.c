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

int main() {
    // Prueba 1: Concatenar dos cadenas con suficiente espacio en dst
    char dest1[20] = "Hola, ";
    const char *src1 = "mundo!";
    
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Prueba 1:\n");
    printf("Resultado: %s\n", dest1);           // Esperado: "Hola, mundo!"
    printf("Longitud total: %zu\n", result1);   // Esperado: longitud total de "Hola, mundo!"
    printf("---------------\n");

    // Prueba 2: Concatenar dos cadenas con espacio insuficiente en dst
    char dest2[10] = "Hola, ";
    const char *src2 = "mundo!";
    
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Prueba 2:\n");
    printf("Resultado: %s\n", dest2);           // Esperado: "Hola, mu"
    printf("Longitud total: %zu\n", result2);   // Esperado: longitud total de "Hola, mundo!"
    printf("---------------\n");

    // Prueba 3: Concatenar con una cadena vacía
    char dest3[20] = "Hola, ";
    const char *src3 = "";
    
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    printf("Prueba 3:\n");
    printf("Resultado: %s\n", dest3);           // Esperado: "Hola, "
    printf("Longitud total: %zu\n", result3);   // Esperado: longitud de "Hola, "
    printf("---------------\n");

    // Prueba 4: Concatenar dos cadenas vacías
    char dest4[20] = "";
    const char *src4 = "";
    
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Prueba 4:\n");
    printf("Resultado: %s\n", dest4);           // Esperado: ""
    printf("Longitud total: %zu\n", result4);   // Esperado: 0
    printf("---------------\n");

    // Prueba 5: Concatenar con un dst ya lleno (sin espacio)
    char dest5[10] = "Hola";
    const char *src5 = "mundo!";
    
    size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    printf("Prueba 5:\n");
    printf("Resultado: %s\n", dest5);           // Esperado: "Hola"
    printf("Longitud total: %zu\n", result5);   // Esperado: longitud de "Hola" + longitud de "mundo!"
    printf("---------------\n");

    return 0;
}