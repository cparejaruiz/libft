/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:49:13 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 23:07:01 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z'))
		|| ((c >= '0') && (c <= '9')))
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
    char c[] = "20";
    if (ft_isalnum(c) == 0)
         printf("%s is not alphanumeric.", c);
    else
         printf("%s is alphanumeric.", c);

    return 0;
}
    */