#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    while (*str == '\0')
    {
        if (*str != c)
            {
                str--;
            }
        else
            {
            return (char *)str;
            }
    }
    
    if (*str == '\0' && *str != c)
    {
        return NULL;
    }     
    
}


int main(void)
{

     const char *cadena = "Hola Mundo";
    char caracter = 'o';
    char *resultado;

    // Buscar la última aparición del carácter 'o'
    resultado = strrchr(cadena, caracter);

    if (resultado != NULL) {
        printf("La última aparición de '%c' está en la posición: %ld\n", caracter, resultado - cadena);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
    }



    const char *cadena2 = "Hola Mundo";
    char caracter2 = 'o';
    char *resultado2;

    // Buscar la última aparición del carácter 'o'
    resultado2 = ft_strrchr(cadena2, caracter2);

    if (resultado != NULL) {
        printf("La última aparición de '%c' está en la posición: %ld\n", caracter2, resultado2 - cadena2);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", caracter2);
    }

    return 0;
    }