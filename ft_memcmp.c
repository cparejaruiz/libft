#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    if (n == 0) {
        return 0;
    }

    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }

    return 0;
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str3[] = "Hello, C Programming!";

    int result1 = memcmp(str1, str3, ft_strlen(str3));
    if (result1 == 0) {
        printf("memcmp: las strings son iguales.\n");
    } else {
        printf("memcmp: las strings son diferentes.\n");
    }

    int result2 = ft_memcmp(str1, str3, ft_strlen(str3));
    if (result2 == 0) {
        printf("ft_memcmp: las strings son iguales.\n");
    } else {
        printf("ft_memcmp: las strings son diferentes.\n");
    }

    return 0;
}
*/
