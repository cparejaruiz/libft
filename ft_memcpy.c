/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:07:44 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:13:56 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	if (dest == NULL || src == NULL)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	while (n--)
	{
		*ptrdest++ = *ptrsrc++;
	}
	return (dest);
}

/*
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
*/