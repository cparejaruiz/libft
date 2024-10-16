/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:43:28 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 11:43:43 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*
int main(void)
{

    int c =  '2';
    int newChar = ft_toupper(c);
     write(1,&c,1);
     write(1,"\n",1);
     write(1,&newChar,1);
     write(1,"\n",1);


    return 0;
    }

    */