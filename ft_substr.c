/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:21:54 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 12:15:33 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		slen ;
	char	*string;

	i = 0;
	j = 0;
	slen = ft_strlen(s);
	string = (char *) malloc ((len +1) * sizeof(char));
	if (!string)
		return (NULL);
	if (start >= slen)
		return (strdup(""));
	while (s[start + i] != '\0' && i < len)
	{
		string[j] = s[start + i];
		i++;
		j++;
	}
	string[j] = '\0';
	return (string);
}

/*
int main(void) {
    char *original = "Hello,u World!";
    unsigned int start = 2;
    size_t length = 5;

    char *substring = ft_substr(original, start, length);

    if (substring != NULL) {
        printf("Subcadena: %s\n", substring);  
        free(substring);  
    } else {
        printf("Error al asignar memoria para la subcadena\n");
    }
    return 0;
}
*/