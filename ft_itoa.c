/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:56:48 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 12:31:31 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		m;
	char	*num;

	len = 1;
	m = n;
	while (m >= 10 || m <= -10)
	{
		m = m / 10;
		len++;
	}
	if (n < 0)
		len++;
	num = malloc((len + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	num[len] = '\0';
	while (n >= 10)
	{
		num[len -1] = (n % 10) + '0';
		len --;
		n = n / 10;
	}
	num[len - 1] = (n % 10) + '0';
	return (num);
}

/*
int main() {
    int num = 12345;
    char *custom_result, *lib_result;

    // Usamos la versión custom de ft_itoa
    custom_result = ft_itoa(num);
    if (custom_result) {
        printf("Custom ft_itoa: %s\n", custom_result);
        free(custom_result);  
    }

    // Usamos la versión estándar de itoa o sprintf
    char buffer[50];
    sprintf(buffer, "%d", num); 
    printf("Standard itoa/sprintf: %s\n", buffer);

    // Comprobamos si ambas funciones producen el mismo resultado
    if (strcmp(custom_result, buffer) == 0) {
        printf("¡Ambas funciones son iguales!\n");
    } else {
        printf("¡Las funciones no son iguales!\n");
    }

    return 0;
}*/