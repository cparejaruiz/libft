#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}




#include <string.h>
/*
int main() {
    char str[] = "Hola, mundo!";
    size_t len = strlen(str);
    size_t len2 = ft_strlen(str);

    printf("strlen: La longitud de la cadena es: %zu\n", len);

    printf("ft_strlen: La longitud de la cadena con es: %zu\n", len2);
    return 0;
}
*/