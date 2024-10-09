#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i = 0;
    while (i < n - 1 && str1[i] != '\0' && str2[i] != '\0' )
    {
        if(str1[i]==str2[i])
        {
            i++;
        }
    }
   return i;

}



int main() {
    char str1[] = "Holanda";
    char str2[] = "Holandas";
    int chain = sizeof(str1);
    int result = strncmp(str1, str2, chain);
    int result2 = ft_strncmp(str1, str2, chain);


    if (result == 0 ||result2 == 0) {
        printf("strncmp: Las cadenas son iguales hasta los primeros %d caracteres.\n", chain);
        printf("ft_strncmp: Las cadenas son iguales hasta los primeros %d caracteres.\n", chain);
    } else if (result < 0 || result2 < 0) {
        printf("strncmp: La cadena str1 es menor que str2.\n");
        printf("ft_strncmp: La cadena str1 es menor que str2.\n");
    } else {
        printf("strncmp: La cadena str1 es mayor que str2.\n");
        printf("ft_strncmp: La cadena str1 es mayor que str2.\n");
    }

    return 0;
}
