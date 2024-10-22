/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:16:35 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 20:06:30 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;
	size_t	src_len;

	i = 0;
	size_dest = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + src_len);
	if (dstsize <= size_dest)
		return (dstsize + src_len);
	while (i + size_dest < dstsize - 1 && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (size_dest + i < dstsize)
		dest[size_dest + i] = '\0';
	return (size_dest + src_len);
}
/*
int main(void) {
    char dest1[20] = "Hola, ";
    printf("Número de caracteres en dest1: %zu\n", strlen(dest1));
    const char *src1 = "tu";
    size_t size1 = 0;

    printf("Antes de ft_strlcat: %s\n", dest1);
    ft_strlcat(dest1, src1, size1);
    printf("Después de ft_strlcat: %s\n", dest1);

    printf("---------------------- \n");


    char dest2[20] = "Hola, ";
    const char *src2 = "mundo!";
    size_t size2 = 20;

    printf("Antes de strlcat: %s\n", dest2);
    strlcat(dest2, src2, size2);
    printf("Después de strlcat: %s\n", dest2);

    char dest3[10] = "Hola, ";
    const char *src3 = "mundo!";
    size_t size3 = 10;

    printf("Antes de ft_strlcat (tamaño 10): %s\n", dest3);
    ft_strlcat(dest3, src3, size3);
    printf("Después de ft_strlcat (tamaño 10): %s\n", dest3);

    char dest4[10] = "Hola, ";
    const char *src4 = "mundo!";
    size_t size4 = 10;

    printf("Antes de strlcat (tamaño 10): %s\n", dest4);
    strlcat(dest4, src4, size4);
    printf("Después de strlcat (tamaño 10): %s\n", dest4);

    return 0;
}
*/