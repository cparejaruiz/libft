/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:59:25 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 12:04:36 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			i++;
		}
		if (i < n && (s1[i] != '\0' || s2[i] != '\0'))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		return (0);
	}
}

/*
int main() {
    char s1[] = "Holanda";
    char s2[] = "Holandas";
    int chain = sizeof(s1);
    int result = strncmp(s1, s2, chain);
    int result2 = ft_strncmp(s1, s2, chain);


    if (result == 0 ||result2 == 0) {
        printf("strncmp: Las cadenas son iguales
		 hasta los primeros %d caracteres.\n", chain);
        printf("ft_strncmp: Las cadenas son iguales hasta
		 los primeros %d caracteres.\n", chain);
    } else if (result < 0 || result2 < 0) {
        printf("strncmp: La cadena s1 es menor que s2.\n");
        printf("ft_strncmp: La cadena s1 es menor que s2.\n");
    } else {
        printf("strncmp: La cadena s1 es mayor que s2.\n");
        printf("ft_strncmp: La cadena s1 es mayor que s2.\n");
    }

    return 0;
}
*/