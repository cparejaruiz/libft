/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:55:02 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 22:03:38 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	const char		*last_occurrence;

	ch = (unsigned char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == ch)
			last_occurrence = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/*
int main(void)
{
    const char *cadena = "teste";
    int caracter = 120;
    char *resultado;

    resultado = strrchr
	(cadena, caracter);

    if (resultado != NULL) {
        printf("strrchr: 
		La última aparición de '%c' está en la posición: 
		%ld\n", caracter, resultado - cadena);
        printf("strrchr: %s\n",  resultado);
   
    } else {
        printf("strrchr: El carácter '%c' 
		no se encontró en la cadena.\n", caracter);
        printf("strrchr: %s\n",  resultado);

    }


    char *resultado2 = ft_strrchr(cadena, caracter);

    if (resultado != NULL) {
        printf("ft_strrchr: La última aparición de '%c' 
		está en la posición: %ld\n", caracter, resultado2 - cadena);
        printf("ft_strrchr: %s\n",  resultado2);

    } else {
        printf("ft_strrchr: El carácter '%c' no se 
		encontró en la cadena.\n", caracter);
        printf("ft_strrchr: %s\n",  resultado2);

    }

    return 0;
    }
*/