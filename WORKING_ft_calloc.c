#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
return 0;
}

int main() {
    size_t tamano_array = 10;
    int *array = malloc(tamano_array * sizeof(int));

    if (array == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (size_t i = 0; i < tamano_array; i++) {
        array[i] = i;
        printf("array[%zu] = %d\n", i, array[i]);
    }

    free(array);
    return 0;
}