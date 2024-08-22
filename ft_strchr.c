#include <stdio.h>
#include <unistd.h>
#include <string.h>

char*    ft_strchr(char *str, int c)
{
    while (*str != '\0')
    {
        if (*str != c)
            {
                str++;
            }
        else
            {
               return str;
            }
    }
    
    if (*str == '\0' && *str != c)
    {
        return NULL;
    }     
    
}


int main(void)
{

    char *string = "Hola, mundo";
    char ch = 'm';
    char *result;

    result = ft_strchr(string, ch);

    if (result != NULL) {
        printf("La letra '%c' se encuentra en la posición: %ld\n", ch, result - string);
    } else {
        printf("La letra '%c' no se encuentra en el texto.\n", ch);
    }

    return 0;
    }