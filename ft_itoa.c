/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 16:45:08 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/11 16:48:36 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_alloc_size(int n)
{
	int		count;
	long	number;

	count = 0;
	number = (int)n;
	if (number <= 0)
	{
		count++;
		number = number * -1;
	}
	while (number)
	{
		count++;
		number = number / 10;
	}
	return (count);
}

static void		rec_fill_number(char *nbr, long long_nbr, int index)
{
	if (long_nbr > 9)
		rec_fill_number(nbr, long_nbr / 10, index - 1);
	nbr[index] = long_nbr % 10 + '0';
}

char			*ft_itoa(int n)
{
	char	*nbr;
	long	long_nbr;

	long_nbr = (long)n;
	nbr = (char*)malloc(sizeof(char) * (get_alloc_size(n) + 1));
	if (nbr == NULL)
		return (NULL);
	if (long_nbr < 0)
	{
		nbr[0] = '-';
		long_nbr = long_nbr * -1;
	}
	rec_fill_number(nbr, long_nbr, get_alloc_size(n) - 1);
	nbr[get_alloc_size(n)] = '\0';
	return (nbr);
}
