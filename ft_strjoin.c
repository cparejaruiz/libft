/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:21:59 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 23:25:27 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0') i++;
	while (s2[j] != '\0') j++;

	int len = i + j;
	char *str = (char *) malloc((len +1) * sizeof(char));
	if (str == NULL)
		return NULL; 
	i = 0;
	while (s1[i] != '\0')
	{
		str[i]=s1[i];
		i++;
	}

		j = 0;

		while (s2[j]!='\0')
		{
			str[i]=s2[j];
			j++;   
			i++;
		}
		str[i] = '\0';
	return str;
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