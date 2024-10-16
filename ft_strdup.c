/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:30:40 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:34:17 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *str)
{
	int		i;
	char	*s1;

	i = 0;
	while (str[i] != '\0')
		i++;
	s1 = (char *) malloc((i + 1) * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s1[i] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int main(void) {
    // Prueba 1: Duplicar una cadena normal
    const char *original = "Hola, mundo!";
    char *dup1 = ft_strdup(original);
    
    if (dup1 != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicada: %s\n", dup1);
        free(dup1);  // Liberamos la memoria después de usar ft_strdup
    } else {
        printf("Error: No se pudo duplicar la cadena.\n");
    }

    // Prueba 2: Duplicar una cadena vacía
    const char *empty = "";
    char *dup2 = ft_strdup(empty);
    
    if (dup2 != NULL) {
        printf("Cadena vacía original: '%s'\n", empty);
        printf("Cadena vacía duplicada: '%s'\n", dup2);
        free(dup2);  // Liberamos la memoria después de usar ft_strdup
    } else {
        printf("Error: No se pudo duplicar la cadena.\n");
    }

    // Prueba 3: Duplicar una cadena muy larga
    const char *long_str = "Este es un string bastante largo 
	para verificar si ft_strdup maneja bien las cadenas grandes.";
    char *dup3 = ft_strdup(long_str);
    
    if (dup3 != NULL) {
        printf("Cadena larga original: %s\n", long_str);
        printf("Cadena larga duplicada: %s\n", dup3);
        free(dup3);  // Liberamos la memoria después de usar ft_strdup
    } else {
        printf("Error: No se pudo duplicar la cadena.\n");
    }

    return 0;
}
*/
