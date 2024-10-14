#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = NULL;   

    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            last_occurrence = s;  // Si encontramos el carácter, actualizamos la última ocurrencia
        }
        s++;
    }

    if (c == '\0')
    {
        return (char *)s;
    }

    return (char *)last_occurrence;
}

/*
int main(void)
{

     const char *cadena = "Hola Mundo";
    char caracter = 'o';
    char *resultado;

    // Buscar la última aparición del carácter 'o'
    resultado = srchr(cadena, caracter);

    if (resultado != NULL) {
        printf("La última aparición de '%c' está en la posición: %ld\n", caracter, resultado - cadena);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
    }



    const char *cadena2 = "Hola Mundo";
    char caracter2 = 'o';
    char *resultado2;

    // Buscar la última aparición del carácter 'o'
    resultado2 = ft_srchr(cadena2, caracter2);

    if (resultado != NULL) {
        printf("La última aparición de '%c' está en la posición: %ld\n", caracter2, resultado2 - cadena2);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", caracter2);
    }

    return 0;
    }
    */