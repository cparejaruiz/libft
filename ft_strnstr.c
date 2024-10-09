#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len) {
    size_t i = 0;
    size_t j;

    if (*little == '\0') {
        return (char *)big;  
    }

    while (i < len && big[i] != '\0')
    {
        if (big[i] == little[0]) {
            j = 0;
            while (i + j < len && big[i + j] == little[j] && little[j] != '\0') {
                j++;
            }
            if (little[j] == '\0') {
                return (char *)&big[i];  // Subcadena encontrada
            }
        }
        i++;
    }
    return NULL;  // No se encontró la subcadena
}

int main() {
    const char *largestring = "Foo Bar Baz Uuu";
    const char *smallstring = "Baz";
    char *ptr_custom;

    ptr_custom = ft_strnstr(largestring, smallstring, strlen(largestring));

    if (ptr_custom) {
        printf("ft_strnstr: Subcadena encontrada: %s\n", ptr_custom);
    } else {
        printf("ft_strnstr: Subcadena no encontrada\n");
    }

    return 0;
}
