#include "libft.h"


void *ft_calloc(size_t num, size_t size)
{

    void* ptr = malloc(num * size);

    if (ptr == NULL )
        {
            return NULL; // Retornar NULL si malloc falla
        }
    ft_memset(ptr, 0, num * size);

      
    
    return ptr;
}


int main() {
    size_t num = 5;   // Número de elementos
    size_t size = sizeof(int); // Tamaño de cada elemento (en este caso, int)

    // Usar la versión estándar de calloc
    int* arr_std = (int*)calloc(num, size);

    // Usar la versión personalizada de calloc (ft_calloc)
    int* arr_custom = (int*)ft_calloc(num, size);

    // Verificar si ambas funciones asignaron memoria correctamente
    if (arr_std == NULL || arr_custom == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;  // Salir con error si no se pudo asignar memoria
    }

    // Imprimir los resultados para ambas versiones
    printf("Resultados usando calloc estándar:\n");
    for (size_t i = 0; i < num; i++) {
        printf("arr_std[%zu] = %d\n", i, arr_std[i]);  // Debería imprimir 0 en todos los elementos
    }

    printf("\nResultados usando ft_calloc (versión personalizada):\n");
    for (size_t i = 0; i < num; i++) {
        printf("arr_custom[%zu] = %d\n", i, arr_custom[i]);  // También debería imprimir 0 en todos los elementos
    }

    // Liberar la memoria asignada por ambas versiones
    free(arr_std);
    free(arr_custom);

    return 0;
}