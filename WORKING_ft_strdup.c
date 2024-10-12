#include "libft.h"

char *ft_strdup(const char *s)
{
    int i = 0;
    char* copy;
    while (s[i]!= '\0')
    {
        copy[i]== s[i];
        i++;
    }
    return copy;
}


int main() {
    const char *original = "Hola, mundo!";
    char *copia;
    char *mycopy;

    // Crear una copia de la cadena original
    copia = strdup(original);
    mycopy = ft_strdup(original);
    if (copia != NULL || mycopy != NULL) {
        printf("strdup: Cadena original: %s\n", original);
        printf("ft_strdup: Cadena original: %s\n", original);
        printf("strdup: Copia: %s\n", copia);
        printf("ft_strdup: Copia: %s\n", mycopy);
        free(copia); // Liberar la memoria asignada
    } else {
        printf("strdup: Error al asignar memoria.\n");
    }

    return 0;
}
