/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:09:46 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/05 18:55:07 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*m;

	m = (char*)b;
	i = 0;
	while (i < len)
	{
		m[i] = c;
		i++;
	}
	return (b);
}
