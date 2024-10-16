/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:48:00 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 11:51:38 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	str = (char *)malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k++] = s1[i++];
	}
	str[k] = '\0';
	return (str);
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