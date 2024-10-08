#include <stddef.h>
#include <stdio.h>


int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;


while (p1 < n)
{
    int i = 0;
    if (p1[i] != p2[i]) 
        {
            return p1[i] - p2[i];
        }
    i++;

}

    return 0;
}

int main() {
    // Ejemplo de uso de my_memcmp
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, C Programming!";

    // Comparar str1 y str2
    int result1 = my_memcmp(str1, str2, sizeof(str1));
    if (result1 == 0) {
        printf("str1 y str2 son iguales.\n");
    } else {
        printf("str1 y str2 son diferentes.\n");
    }

    // Comparar str1 y str3
    int result2 = my_memcmp(str1, str3, sizeof(str1));
    if (result2 == 0) {
        printf("str1 y str3 son iguales.\n");
    } else {
        printf("str1 y str3 son diferentes.\n");
    }

    return 0;
}

