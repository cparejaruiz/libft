#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i =0, j  = 0;
    while (s1[i] != '\0') i++;
    while (s2[j] != '\0') j++;

    int len = i + j;
    
    char *str = (char *) malloc((len +1) * sizeof(char));
    if (str == NULL)
    {
        return NULL; // Retornar NULL si malloc falla
    }  
    
    i = 0;
    while (s1[i] != '\0')
    {
        str[i]=s1[i];
        i++;
    }

        j = 0;

        while (s2[j]!='\0')
        {
            str[i]=s2[j];
            j++;   
            i++;
        }
        str[i] = '\0';
    return str;
}

int main(void) {
      // Prueba 1: Concatenación de dos cadenas
    const char *s1 = "Hola, ";
    const char *s2 = "mundo!";
    
    char *result = ft_strjoin(s1, s2);
    if (result != NULL) {
        printf("Resultado de ft_strjoin(s1, s2): %s\n", result);
        free(result);  // Liberamos la memoria después de usar ft_strjoin
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    // Prueba 2: Concatenar cadena vacía con otra cadena
    char *s3 = "";
    char *s4 = "Esto es una prueba.";
    
    char *result2 = ft_strjoin(s3, s4);
    if (result2 != NULL) {
        printf("Resultado de ft_strjoin(s3, s4): %s\n", result2);
        free(result2);  // Liberamos la memoria después de usar ft_strjoin
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    // Prueba 3: Concatenar dos cadenas vacías
    char *s5 = "";
    char *s6 = "";
    
    char *result3 = ft_strjoin(s5, s6);
    if (result3 != NULL) {
        printf("Resultado de ft_strjoin(s5, s6): %s\n", result3);
        free(result3);  // Liberamos la memoria después de usar ft_strjoin
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    return 0;
}