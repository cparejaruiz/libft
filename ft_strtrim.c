/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:48:00 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 12:40:51 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
int main() {
    char *input = "  Hola mundo  ";
    char *set = " ";

    char *result_custom = ft_strtrim(input, set);

    char *result_lib = NULL;
    // Simulamos la función de recorte en los extremos
    char *start = input;
    while (*start && strchr(set, *start)) {
        start++;
    }
    
    if (*start != '\0') {
        char *end = start + strlen(start) - 1;
        while (end > start && strchr(set, *end)) {
            end--;
        }

        size_t len = end - start + 1;
        result_lib = malloc(len + 1);
        if (result_lib) {
            strncpy(result_lib, start, len);
            result_lib[len] = '\0';
        }
    } else {
        result_lib = strdup("");  // Si toda la cadena era recortada
    }

    printf("Resultado personalizado: '%s'\n", result_custom);
    printf("Resultado de la biblioteca: '%s'\n", result_lib);

    free(result_custom);
    free(result_lib);

    return 0;
}
*/