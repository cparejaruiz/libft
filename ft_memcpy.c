#include <string.h>
#include <stdio.h>


void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptrdest = dest;
    unsigned char const *ptrsrc = src;
    while (n--)
    {
        *ptrdest = *ptrsrc;
        *ptrdest++;
    }
    return ptrdest;
}

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];
    
    memcpy(destination, source, sizeof(int) * 5);
    
    printf("memcpy es ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    int source2[5] = {6,7,8,9,10};
    int destination2[5];
    
    memcpy(destination2, source2, sizeof(int) * 5);
    printf("ft_memcpy es ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", destination2[i]);
    }
    printf("\n");

    
    return 0;
}
