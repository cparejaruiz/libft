/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:16:22 by carmen            #+#    #+#             */
/*   Updated: 2024/10/17 13:01:27 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL )
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}

/*
int main() {
    size_t num = 5;   // Número de elementos
    size_t size = sizeof(int); // Tamaño de cada elemento (en este caso, int)

    int* arr_std = (int*)calloc(num, size);

    int* arr_custom = (int*)ft_calloc(num, size);

    if (arr_std == NULL || arr_custom == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;  // Salir con error si no se pudo asignar memoria
    }

    printf("Resultados usando calloc estándar:\n");
    for (size_t i = 0; i < num; i++) {
        printf("arr_std[%zu] = %d\n", i, arr_std[i]);  
    }

    printf("\nResultados usando ft_calloc :\n");
    for (size_t i = 0; i < num; i++) {
        printf("arr_custom[%zu] = %d\n", i, arr_custom[i]);  
    }

    // Liberar la memoria asignada por ambas versiones
    free(arr_std);
    free(arr_custom);

    return 0;
}*/