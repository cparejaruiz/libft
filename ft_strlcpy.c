
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {

    int i = 0;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

}

int main() {
    char src[] = "Hola, mundo!";
    char dst[20];

    strlcpy(dst, src, sizeof(dst));
    printf("strlcpy: Destino: %s\n", dst);

    ft_strlcpy(dst, src, sizeof(dst));
    printf("ft_strlcpy: Destino: %s\n", dst);

    return 0;
}
