/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:21:54 by carmen            #+#    #+#             */
/*   Updated: 2024/10/19 18:21:01 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		slen ;
	char		*substring;

	i = 0;
	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (strdup(""));
	if (len > slen - start)
		len = slen - start;
	substring = (char *) malloc ((len +1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substring[j] = s[start + i];
		i++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}

/*
int main(void) {
    char *original = "hola";
    unsigned int start = 0;
    size_t length = 545;

    char *subsubstring = ft_substr(original, start, length);

    if (subsubstring != NULL) {
        printf("Subcadena: %s\n", subsubstring);  
        free(subsubstring);  
    } else {
        printf("Error al asignar memoria para la subcadena\n");
        free(subsubstring);  
    }
    return 0;
}*/