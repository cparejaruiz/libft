/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:51:54 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 11:54:24 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len) 
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str && len == 0) 
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	while (i < len && str[i] != '\0') 
	{
		if (str[i] == to_find[0]) {
		j = 0;
		while (i + j < len && str[i + j] == to_find[j] 
			&& to_find[j] != '\0') {
				j++;
			}
		if (to_find[j] == '\0') {
			return (char *)&str[i];
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main() {
    const char *largestring = "Foo Bar Baz Uuu";
    const char *smallstring = "Baz";
    char *ptr_custom;

    ptr_custom = ft_strnstr(largestring, smallstring, strlen(largestring));

    if (ptr_custom) {
        printf("ft_strnstr: Subcadena encontrada: %s\n", ptr_custom);
    } else {
        printf("ft_strnstr: Subcadena no encontrada\n");
    }

    return 0;
}
*/