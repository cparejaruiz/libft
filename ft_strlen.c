/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:39:00 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:40:26 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main() {
    char str[] = "Hola, mundo!";
    size_t len = strlen(str);
    size_t len2 = ft_strlen(str);

    printf("strlen: La longitud de la cadena es: %zu\n", len);

    printf("ft_strlen: La longitud de la cadena con es: %zu\n", len2);
    return 0;
}
*/