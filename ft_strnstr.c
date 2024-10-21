/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:51:54 by carmen            #+#    #+#             */
/*   Updated: 2024/10/21 21:09:10 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && big[i + j] == little[j]
				&& little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main() {
    const char *largebiging = "Foo Bar Baz Uuu";
    const char *smallbiging = "Baz";
    char *ptr_custom;

    ptr_custom = ft_strnstr(largebiging, smallbiging, biglen(largebiging));

    if (ptr_custom) {
        printf("ft_strnstr: Subcadena encontrada: %s\n", ptr_custom);
    } else {
        printf("ft_strnstr: Subcadena no encontrada\n");
    }

    return 0;
}
*/