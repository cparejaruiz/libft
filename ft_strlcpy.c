
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {

    size_t i = 0;
    if (dstsize == 0)  
        return (ft_strlen(src));

    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    	dst[i]= '\0';
	return (ft_strlen(src));
}

/*
int main() {
    char src[] = "Hola, mundo!";
    char dst[20];

    strlcpy(dst, src, sizeof(dst));
    printf("strlcpy: Destino: %s\n", dst);

    ft_strlcpy(dst, src, sizeof(dst));
    printf("ft_strlcpy: Destino: %s\n", dst);

    return 0;
}
*/