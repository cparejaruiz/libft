#include "libft.h"

#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    char *str;

    if (!s1 || !set)
        return (NULL);

    while (s1[i] && ft_strchr(set, s1[i]))
        i++;

    if (s1[i] == '\0')
        return (ft_strdup(""));

    j = ft_strlen(s1) - 1;
    while (j > i && ft_strchr(set, s1[j]))
        j--;

    str = (char *)malloc((j - i + 2) * sizeof(char));
    if (!str)
        return (NULL);

    while (i <= j)
    {
        str[k++] = s1[i++];
    }

    str[k] = '\0';
    return (str);
}

/*
int main() {
    // Cadena de prueba y conjunto de caracteres a eliminar
    char *input = "  Hola mundo  ";
    char *set = " ";

    // Usar la función ft_strtrim (custom)
    char *result_custom = ft_strtrim(input, set);

    // Usar la función estándar de la biblioteca C (manualmente implementada aquí)
    char *result_lib = NULL;
    // Simulamos la función de recorte en los extremos
    char *start = input;
    while (*start && strchr(set, *start)) {
        start++;
    }
    
    if (*start != '\0') {
        char *end = start + strlen(start) - 1;
        while (end > start && strchr(set, *end)) {
            end--;
        }

        size_t len = end - start + 1;
        result_lib = malloc(len + 1);
        if (result_lib) {
            strncpy(result_lib, start, len);
            result_lib[len] = '\0';
        }
    } else {
        result_lib = strdup("");  // Si toda la cadena era recortada
    }

    // Mostrar resultados
    printf("Resultado personalizado: '%s'\n", result_custom);
    printf("Resultado de la biblioteca: '%s'\n", result_lib);

    // Liberar memoria
    free(result_custom);
    free(result_lib);

    return 0;
}

*/