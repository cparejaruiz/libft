/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:56:14 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:07:23 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main(void) {
    char data[] = {1, 2, 3, 4, 5, 6};
    int target = 4;
    size_t n = sizeof(data); // Tamaño del bloque de memoria

    // Usando la función original memchr
    char *result = memchr(data, target, n);

    if (result != NULL) {
        printf("memchr: Se encontró el valor %d en la posición
		: %ld\n", target, result - data);
    } else {
        printf("memchr: El valor %d no fue encontrado.\n", target);
    }

    // Usando la función personalizada ft_memchr
    char *result_custom = ft_memchr(data, target, n);

    if (result_custom != NULL) {
        printf("ft_memchr: Se encontró el valor %d en la posición: 
		%ld\n", target, result_custom - data);
    } else {
        printf("ft_memchr: El valor %d no fue encontrado.\n", target);
    }

    return 0;
}
*/