/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:07:44 by carmen            #+#    #+#             */
/*   Updated: 2024/10/19 21:11:12 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;
	size_t				i;

	if (n == 0 || dest == src || (!dest && !src))
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}

/*
int main() {
char source[] = "a1-@;'(g#:j/l0] !uy9Be*BY ";
    int destination[50];
    
    memcpy(destination, source, sizeof(char) * 27);
    
    printf("memcpy es ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    
char source2[] = "a1-@;'(g#:j/l0] !uy9Be*BY ";

    int destination2[50];
    
    memcpy(destination2, source2 ,sizeof(char) * 27);
    printf("ft_memcpy es ");
    for(int i = 0; i < 27; i++) {
        printf("%d ", destination2[i]);
    }
    printf("\n");

    
    return 0;
}
*/