/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:21:59 by carmen            #+#    #+#             */
/*   Updated: 2024/10/17 12:01:06 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		total_len;
	char	*str;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;

	str = (char *)malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	ft_strcpy(str, s1, &i);
	ft_strcpy(str, s2, &i);
	str[i] = '\0';
	return (str);
}

/*
int main(void) {
    const char *s1 = "Hola, ";
    const char *s2 = "mundo!";
    
    char *result = ft_strjoin(s1, s2);
    if (result != NULL) {
        printf("Resultado de ft_strjoin(s1, s2): %s\n", result);
        free(result); 
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    char *s3 = "";
    char *s4 = "Esto es una prueba.";
    
    char *result2 = ft_strjoin(s3, s4);
    if (result2 != NULL) {
        printf("Resultado de ft_strjoin(s3, s4): %s\n", result2);
        free(result2);  
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    char *s5 = "";
    char *s6 = "";
    
    char *result3 = ft_strjoin(s5, s6);
    if (result3 != NULL) {
        printf("Resultado de ft_strjoin(s5, s6): %s\n", result3);
        free(result3);  
    } else {
        printf("Error: No se pudo asignar memoria para la concatenación.\n");
    }

    return 0;
}*/