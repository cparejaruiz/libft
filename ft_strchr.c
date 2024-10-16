/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:27:31 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 10:30:25 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int main(void)
{

    char *string = "Hola, mundo";
    char ch = 'm';
    char *result;

    result = ft_strchr(string, ch);
        printf("result %s\n", result);


    if (result != NULL) {
        printf("La letra '%c' se encuentra en la posición: 
		%ld\n", ch, result - string);
    } else {
        printf("La letra '%c' no se encuentra en el texto.\n", ch);
    }

    return 0;
    }
*/