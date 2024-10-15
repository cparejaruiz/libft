/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:28:02 by carmen            #+#    #+#             */
/*   Updated: 2024/10/15 23:48:38 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
/*
int main(void)
{
    char buffer[10];
    char buffer2[10];

    bzero(buffer, sizeof(buffer));
    ft_bzero(buffer2, sizeof(buffer2));

    printf("Contenido de buffer bzero: ");
    for (size_t i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]); 
    }
    printf("\n");

    printf("Contenido de buffer2 ft_bzero: ");
    for (size_t j = 0; j < sizeof(buffer2); j++) {
        printf("%d ", buffer2[j]); 
    }
    printf("\n");

    return 0;
}
*/ 