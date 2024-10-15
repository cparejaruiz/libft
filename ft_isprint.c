/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:56:21 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 00:04:06 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isprint(c) == 0)
         printf("%c is not printable.", c);
    else
         printf("%c is printable.", c);

    return 0;

    }
    */
