/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:14:10 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:17:34 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}

/*
int main() {
    char src[] = "Hello, World!";
    char dest[20];

    memmove(dest, src, strlen(src) + 1); 
    printf("Destino memmove: %s\n", dest); 
    
    

    char src2[] = "Bye, World!";
    char dest2[20];

    memmove(dest2, src2, strlen(src2) + 1); 
    printf("Destino ft_memmove: %s\n", dest2);
    
    return 0;
}
*/